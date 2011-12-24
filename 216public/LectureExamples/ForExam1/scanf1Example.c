#include <stdio.h>

int main() {
  int a, b;
  while (scanf("%d %d", &a, &b) == 2)
    printf("A: %d; B: %d\n", a, b);
  return 0;
}

/* Run this example multiple times
use each of the following as input:

input		a gets	b gets
2_3		2	3
23_456_ 	23	456
2_3_4		2	3 
	( 4 remains unread, 
        along with  the blank space before it)
2_3Z_4	 	2	3 (
	Z_4 remain unread)
___2____3	2	3
2\n\n3		2	3

(NOTE: _ means a space)

*/
