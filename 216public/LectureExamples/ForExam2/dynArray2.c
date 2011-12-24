#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>

void fillArr(int *arr, int size){
	int randVal = 0;
	int index;
        time_t seconds;
        time(&seconds);
	srand((unsigned int) seconds);

	for (index= 0; index < size; index++){
		randVal = rand() % 10 + 1;
		arr[index] = randVal;
	}
}
void printArr(int arr[], int size){
	int index;
      	printf("Array Values: ");
	for (index = 0; index < size; index++){
		printf(" %d", arr[index]);
	}
	printf("\n");
}

int main(){
	int max;
	int *arr1 = NULL;
	printf("Give the size: ");
	scanf("%d",&max);
	arr1 = malloc(max * sizeof(int));
        if (arr1 == NULL){
		printf("Can't allocate that much\n");
		exit(-1);
	}
	
	fillArr(arr1, max);
	printArr(arr1, max);

	free(arr1);
	arr1 = NULL;
	return 0;
}
