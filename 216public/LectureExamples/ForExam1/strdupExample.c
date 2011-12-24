#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
   char * first;
   char * last;
   first = calloc(1,strlen("Jan")+1);
   strcpy (first, "Jan");
   printf("%s\n",first);
   last = strdup(first);
   printf("%s\n",last);
   printf("%p and %p\n",first,last);
   return 0;
}
