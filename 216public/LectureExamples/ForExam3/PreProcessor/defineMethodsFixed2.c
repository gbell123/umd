#if !defined(SIZE)
   #define SIZE 20
#else
   #undef SIZE
   #define SIZE 20
#endif

#include <stdio.h>

/* compile with no extra options and run
   and then with -D SIZE=100 
*/

int main(){

   printf("size = %d\n",SIZE);
   return 0;
}
