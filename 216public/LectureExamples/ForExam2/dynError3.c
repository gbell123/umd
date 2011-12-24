#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main() {
  int *p1 = calloc(SIZE,sizeof(int));
  int *begin = p1;
  int i, seed;
  printf("type the seed: ");
  scanf("%d",&seed);
  srand(seed);

  for( i = 0; i < SIZE;i++,p1++){
     *p1  = rand()%10;
  }
  p1 = begin;
  for (i = 0; i < SIZE; i++){
      printf("%d ",begin[i]);
      if (begin[i] < 7){
	p1 = &begin[i];
      }
  } 
  printf(": found %d\n",*p1);

  free(p1); 
    /* replace with free(p1) or free(begin) and see what happens */
  
  return 0;
}

