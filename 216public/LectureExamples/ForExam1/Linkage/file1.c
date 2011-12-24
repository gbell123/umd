#include <stdio.h>

int bar(int);
extern int even_flag;

static int foo(int i) {
  return 2 * i;
}

static int mine(){
   return 99;
}
int main() {
  even_flag = 0;
  printf("foo(2): %d\n", foo(2));
  printf("bar(2): %d\n", bar(2));
  if (even_flag)
    printf("even int passed to bar()\n");
  else
    printf("appears that odd int passed to bar()\n");
  printf("mine = %d\n",mine());
  return 0;
}

