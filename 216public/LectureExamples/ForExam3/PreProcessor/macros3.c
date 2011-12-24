#include <stdio.h>
#define SQUARE(x)  x * x
#define SUM(x, y)  x + y


int main(){
   int a=3, b=2;
   printf("a=%d, b = %d\n",a,b);
   printf("a = %d\n",a);
   printf("SQUARE(a++) = %d\n",SQUARE(a++));
   printf("a = %d, b = %d\n",a,b);
   printf("SUM(++a,++b) = %d\n",SUM(++a,++b));
   printf("a = %d, b = %d\n",a,b);

   return 0;
}
