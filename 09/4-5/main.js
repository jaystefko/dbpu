const TEST_NUMBER = 100
const TEST_CASE = 10000

function main() {
  measureTimeDuration('i')
  measureTimeDuration('r')
}

function factorialRecursive(number) {
  if (number == 1) {
    return 1
  } else {
    return number * factorialRecursive(number - 1)
  }
}

function factorialIterative(number) {
  let i,
    result = 1
  for (i = 2; i < number; i++) {
    result *= i
  }
  return result
}

function measureTimeDuration(algorithm) {
  let i

  if (algorithm == 'i') {
    start = console.time('Iterative:')
    for (i = 0; i < TEST_NUMBER; i++) {
      factorialIterative(TEST_CASE)
    }
    stop = console.timeEnd('Iterative:')
  } else if (algorithm == 'r') {
    start = console.time('Recursive:')
    for (i = 0; i < TEST_NUMBER; i++) {
      factorialRecursive(TEST_CASE)
    }
    stop = console.timeEnd('Recursive:')
  } else {
    console.log('Error')
  }
}

main()
