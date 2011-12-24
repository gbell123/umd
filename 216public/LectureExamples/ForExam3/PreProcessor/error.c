#if !defined(SIZE)
   #define SIZE 20
#endif

#include <stdio.h>

/* compile with no extra options and run
   and then with -D SIZE=100 
*/

int main(){

   printf("size = %d\n",SIZE);

#if !defined(SIZE2)
    #error  Can not proceed SIZE2 not defined
#endif

   printf("size2 = %d\n",SIZE2);
   return 0;
}
