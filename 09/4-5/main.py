from datetime import datetime

TEST_NUMBER = 100
TEST_CASE = 10000

def main():
  measureTimeDuration('i')
  measureTimeDuration('r')


def factorialRecursive(number):
  if number == 1: return 1 
  else: return number * factorialRecursive(number - 1) 


def factorialIterative(number):
  result = 1
  for i in range(2, number):
    result *= i
  return result


def measureTimeDuration(algorithm):
  if (algorithm == 'i'):
    start = datetime.now()
    for _ in range(0, TEST_NUMBER): factorialIterative(TEST_CASE)
    stop = datetime.now()
    print('Iterative: ', (stop - start).total_seconds() * 1000, 'ms')

  elif algorithm == 'r':
    start = datetime.now()
    for _ in range(TEST_NUMBER): factorialRecursive(TEST_CASE)
    stop = datetime.now()
    print('Iterative: ', (stop - start).total_seconds() * 1000, 'ms')

  else:
    print('Error') 


main()