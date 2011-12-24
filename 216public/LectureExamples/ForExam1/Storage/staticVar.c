#include <stdio.h>

int sum() {
  static int i = 1;
  int j = 1;
  printf("i+1: %d; j: %d\n", ++i, j++);
  return i+j;
}

int main() {
  printf("\tsum1 = %d\n",sum());
  printf("\tsum2 = %d\n",sum());
  printf("\tsum3 = %d\n",sum());
  return 0;
}

