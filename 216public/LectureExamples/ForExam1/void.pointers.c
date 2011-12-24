#include <stdio.h>
int main(){

   void *vp;
   int a = 6, *ip;
   double b = 3.14, *dp;
   vp = &a;
   ip = vp;
   /* printf("%d\n",*vp);  invalid */
   printf("%d\n",*ip);
   printf("%d\n",*(int*)vp);

   vp = &b;
   dp = vp;
   /* printf("%.2f\n",*vp);  invalid */
   printf("%.2f\n",*dp);
   printf("%.2f\n",*(double*)vp);

   return 0;
}
