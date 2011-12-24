#include <stdio.h>

int main(){
  int a; unsigned int b;
  float c; char x;

  printf("size of a = %d\n",(int)sizeof(a));
  printf("size of b = %d\n",(int)sizeof(b));
  printf("size of c = %d\n",(int)sizeof(c));
  printf("size of x = %d\n",(int)sizeof(x));
 
  a = 99;
  printf("size of a++ = %d\n",(int)sizeof(a++));
  printf("a = %d\n",a);

  return 0;
}
