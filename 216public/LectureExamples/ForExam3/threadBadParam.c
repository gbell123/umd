#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *get_rand_num(void *args) {
  int num;
  srand(pthread_self());
  num = rand();
  return &num;
}

int main() {
  pthread_t tid;
  void *ptr = NULL;

  pthread_create(&tid, NULL, get_rand_num, NULL);
  pthread_join(tid, &ptr);
  printf("Random number: %d\n", * (int *) ptr);
  return 0;
}
