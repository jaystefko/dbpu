/*
    **********
    static in front of inline because of gcc
    link: https://www.geeksforgeeks.org/inline-function-in-c/
    **********
*/

#include <stdio.h>
#include <time.h>

#define TEST_NUMBER 100
#define TEST_CASE 10000

static inline int factorialRecursive(int number) {
  if (number == 1) { return 1; }
  else { return number * factorialRecursive(number - 1); }
}

static inline int factorialIterative(int number) {
  int i, result = 1;
  for (i = 2; i < number; i++) {
    result *= i;
  }
  return result;
}

void measureTimeDuration(char algorithm) {
  clock_t start, stop;
  int i;

  if (algorithm == 'i') {
    start = clock();
    for (i = 0; i < TEST_NUMBER; i++) { factorialIterative(TEST_CASE); }
    stop = clock();
    printf("Iterative time duration: %fms\n", ((double)(stop - start) / CLOCKS_PER_SEC) * 1000);

  } else if (algorithm == 'r') {
    start = clock();
    for (i = 0; i < TEST_NUMBER; i++) { factorialRecursive(TEST_CASE); }
    stop = clock();
    printf("Recursive time duration: %fms\n", ((double)(stop - start) / CLOCKS_PER_SEC) * 1000);

  } else { printf("Error!\n"); }
}

int main() {
  
  measureTimeDuration('i');
  measureTimeDuration('r');

  return 0;
}