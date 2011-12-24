#include <stdio.h>
#define VAL "My Name is Jan"
#define SUM(a,b) a+b
#define MIN(a, b) a < b ? a : b
#define LONG_ONE \
   printf("this is the first\n");\
   printf("this is the second\n");\
   printf("and the third line substituted\n");
int main(){
   printf("%s\n",VAL);
   printf(VAL);
   printf("\n");
   printf("sum(3,5) = %d\n",SUM(3,5));
   printf("sum(14,9) = %d\n",SUM(14,9));
   printf("min(3,5) = %d\n",MIN(3,5));
   printf("min(14,9) = %d\n",MIN(14,9));
   LONG_ONE
   return 0;
}
