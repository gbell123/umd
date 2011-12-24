#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 10


void fillArr(int *arr){
	int randVal = 0;
	int index;
        time_t seconds;
        time(&seconds);
	srand((unsigned int) seconds);

	for (index= 0; index < MAX; index++){
		randVal = rand() % 10 + 1;
		arr[index] = randVal;
	}
}
void printArr(int arr[]){
	int index;
      	printf("Array Values: ");
	for (index = 0; index < MAX; index++){
		printf(" %d", arr[index]);
	}
	printf("\n");
}

int main(){
	/* statically allocated array
	not dynamic - therefore size must
	be known at compile time */
	int arr1[MAX];
	
	fillArr(arr1);
	printArr(arr1);

	return 0;
}
