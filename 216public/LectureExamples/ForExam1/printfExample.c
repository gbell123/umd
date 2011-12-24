#include <stdio.h>

/* most comments are not included to save space 
when displaying */

/* this is the prototype 
   It makes sure the caller and the callee agree.
   This would often appear in a .h file, but because
   this example is so short, it is here.
*/
int f(int);

int main() {
  int a = 42;
  printf("%d < %d\n", a, a+5);
  printf("%d\n", f(a));
  return 0;
}

int f(int i) {
  return i * 2;
}

