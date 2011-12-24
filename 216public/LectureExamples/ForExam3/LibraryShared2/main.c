#include <stdio.h>
#include "first.h"
#include "second.h"

int main(){
   int a, b;
   printf("Give 2 integers:");
   scanf("%d%d",&a, &b);
   printf("first(%d) = %d\n",a,f(a));
   printf("first(%d) = %d\n",b,f(b));
   printf("second(%d) = %d\n",a,s(a));
   printf("second(%d) = %d\n",b,s(b));
   return 0;
}
