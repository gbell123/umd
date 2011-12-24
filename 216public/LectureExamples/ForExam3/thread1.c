#include <pthread.h>
#include <stdio.h>

struct point {
  int x, y;
};
static void *print_point(void *pointp);

int main() {
  pthread_t tid;
  struct point pt = {3, 5};
  pthread_create(&tid, NULL, print_point, &pt);
  pthread_join(tid, NULL);
  printf("done with main function\n");
  return 0;
}

static void *print_point(void *pointp) {
  struct point arg = * (struct point *) pointp;
  printf("Point: (%d, %d)\n", arg.x, arg.y);
  printf("done with print_point function\n");
  return NULL;
}

