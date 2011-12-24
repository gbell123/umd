#include <stdio.h>
#define SIZE 5

int main(){
     	int i;

	/* pointer but no dynmica memory allocation */
	int a = 97;
	int *ap = &a;
        int arr[SIZE] = {1,3,2,6,4}; 
        int arrp = arr;

        /* pointer with dynamic memory allocation */
        int *bp;
        bp = malloc(sizeof(int)); /* changes value of pointer */
        *bp = 123; /* changes value pointed at */
	free(bp);
        printf("seeing int value: %d\n", *bp); /*bad idea*/
        bp = calloc(SIZE,sizeof(int));

        *bp = 777;
        *(bp+1) = 214;
        bp[2] = 918;
	free(bp);
	for (i = 0; i < SIZE; i++){
        	printf("val: %d\n", *(bp+i)); /*bad idea*/
	}

	return 0;
}
