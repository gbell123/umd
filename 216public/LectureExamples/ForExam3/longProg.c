#include <stdio.h>
#include <malloc.h>
int main(){
   int n = 100000;
   int i,j; int *p;
  for (i = 0; i < n; i++){
    	p = calloc(n,sizeof(int));
      	for (j = 0; j < n; j++){
		p[j] = j*i;
      	}
      	free(p);
   }
   printf("done with %d\n",n);
   return 0;
}
