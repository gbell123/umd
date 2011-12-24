#include <stdio.h>
#include <stdlib.h>

#define N   2000000
#define BIG 2000000

static int rnums[N];
static int bigarr[BIG];

void n_random_nums() {
  int i;
  for (i = 0; i < N; i++)
    rand();
}

void get_random_nums() {
  int i;
  for (i = 0; i < N; i++)
    rnums[i] = rand();
}

void floating_point() {
  int i;
  float x = 1.0f;
  get_random_nums();
  for (i = 0; i < N; i++) {
    x *= rnums[(i+1)%N];
    x /= rnums[i];
  }
}

void big_array() {
  int i;
  get_random_nums();
  for (i = 0; i < N; i++)
    bigarr[rnums[i]%BIG] = i;
}

int main() {
  n_random_nums();
  floating_point();
  big_array();
  return 0;
}
