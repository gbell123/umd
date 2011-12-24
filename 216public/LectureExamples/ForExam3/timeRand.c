#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int i, stime;
  long ltime;

  /* get the current calendar time */
  ltime = time(NULL);
  stime = (unsigned) ltime/2;
  srand(stime);

  for(i=0; i<10; i++) 
	printf("%d ", rand()%9);
  printf("\n");

  return 0;
}
