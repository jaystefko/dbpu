#include <pthread.h>
#include <iostream>
#include <chrono>

using namespace std;

pthread_mutex_t initializer = PTHREAD_MUTEX_INITIALIZER;
long variable = 0;

void *count(void *param) {
  int i;
  pthread_mutex_lock(&initializer); 
  for (i = 0; i < 5000000; i++) {
    variable += 1;
    cout << "Iterated variable: " << variable << endl;
  }
  pthread_mutex_unlock(&initializer);
  return NULL;
}

int main() {
  pthread_t thread_1,thread_2;
  pthread_create(&thread_1, NULL, count, NULL);
  pthread_create(&thread_2, NULL, count, NULL);

  auto time_start = chrono::high_resolution_clock::now();
  pthread_join(thread_1, NULL);
  pthread_join(thread_2, NULL);
  auto time_stop = chrono::high_resolution_clock::now();

  auto duration = chrono::duration_cast<chrono::seconds>(time_stop - time_start).count();
  cout << "Score after two iterations: " << variable << endl;
  cout << "Duration time: " << duration <<" seconds" << endl;
  return 0;
}
