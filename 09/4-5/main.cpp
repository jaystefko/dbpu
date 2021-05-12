#include <iostream>
#include <time.h>

#define TEST_NUMBER 100
#define TEST_CASE 10000
using namespace std;

inline int factorialRecursive(int number);
inline int factorialIterative(int number);
void measureTimeDuration(char algorithm);

int main() {
  
  measureTimeDuration('i');
  measureTimeDuration('r');

  return 0;
}

inline int factorialRecursive(int number) {
  if (number == 1) { return 1; }
  else { return number * factorialRecursive(number - 1); }
}

inline int factorialIterative(int number) {
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
    cout << "Iterative time duration: " << ((double)(stop - start) / CLOCKS_PER_SEC) * 1000 << "ms" << endl;

  } else if (algorithm == 'r') {
    start = clock();
    for (i = 0; i < TEST_NUMBER; i++) { factorialRecursive(TEST_CASE); }
    stop = clock();
    cout << "Recursive time duration: " << ((double)(stop - start) / CLOCKS_PER_SEC) * 1000 << "ms" << endl;

  } else { cout << "Error" << endl; }
}