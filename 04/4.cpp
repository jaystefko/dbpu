#include <iostream>
#include <chrono>

using namespace std;

long variable = 0;

void count() {
  int i;
  for (i = 0; i < 5000000; i++) {
    variable += 1;
    cout << "Iterated variable: " << variable << endl;
  }
}

int main() {
  auto time_start = chrono::high_resolution_clock::now();
  count();
  count();
  auto time_stop = chrono::high_resolution_clock::now();

  auto duration = chrono::duration_cast<chrono::seconds>(time_stop - time_start).count();
  cout << "Score after two iterations: " << variable << endl;
  cout << "Duration time: " << duration <<" seconds" << endl;
  return 0;
}
