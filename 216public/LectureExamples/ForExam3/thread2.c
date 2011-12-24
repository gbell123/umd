#include <pthread.h>
#include <stdio.h>

struct point {
  int x, y;
};
static void *print_point(void *pointp);
static void *print_msgs(void * val);

int main() {
  pthread_t tid, tid2;
  struct point pt = {3, 5};
  printf("main=%ld\n",pthread_self());
  pthread_create(&tid, NULL, print_point, &pt);
  pthread_create(&tid2, NULL, print_msgs, &tid);
  pthread_join(tid, NULL);
  printf("done with main function - thread = %ld\n",pthread_self());
  return 0;
}

static void *print_point(void *pointp) {
  struct point arg = * (struct point *) pointp;
  printf("print_point = %ld\n",pthread_self());
  printf("Point: (%d, %d)\n", arg.x, arg.y);
  printf("done with print_point function\n");
  return NULL;
}

void *print_msgs(void *val){
  pthread_t t = *(pthread_t*)val;
  printf("print_msg = %ld\n",pthread_self());
  printf("called from main after thread created before join with %ld\n",t);
  printf("still in print_msgs after thread created before join\n");
  return NULL;
}

