#include <stdio.h>
#define SQUARE(x)  ((x) * (x))
#define SUM(x, y)  ((x) + (y))


int main(){
   int a=3, b=5;
   printf("a=%d, b = %d\n",a,b);
   printf("SQUARE(a) = %d\n",SQUARE(a));
   printf("SUM(a,9) = %d\n",SUM(a,9));
   printf("SUM(a,b) * SUM(a,b) = %d\n",
		SUM(a,b)*SUM(a,b));
   printf("SQUARE(a+b) = %d\n",SQUARE(a+b));

   return 0;
}
