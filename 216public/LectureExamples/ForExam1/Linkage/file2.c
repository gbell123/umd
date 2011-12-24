#include <stdio.h>

int even_flag;

static int foo(int i) {
  return 3 * i;
}

static int mine(int i){
  return i*i;
}

int bar(int i) {
  if (i % 2 == 0)
    even_flag = 1;
  printf("mine(3) = %d\n",mine(3));
  return foo(i);
}

