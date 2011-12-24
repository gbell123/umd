#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>

void fillArr(int *arr, int size){
	int randVal = 0;
	int index;
	int *r1, *r2, *r3;
        time_t seconds;
        time(&seconds);
	srand((unsigned int) seconds);

	for (index= 0; index < size; index++){
		int i;
		r1 = malloc(sizeof(int));
		if (!r1) exit(EXIT_FAILURE);
		*r1 = rand()%1000;
		r2 = malloc(sizeof(int));
		if (!r2) exit(EXIT_FAILURE);
		*r2 = rand()%2549;
		r3 = malloc(sizeof(int));
		if (!r3) exit(EXIT_FAILURE);
		*r3 = rand()%19;

		for (i = 0; i < 1000; i++){
			int *pntr;
			pntr = calloc(1000, sizeof(int));
			free(pntr);
		}
		randVal = (*r1 * *r2 * *r3) % 10 + 1;
		arr[index] = randVal;

		free(r1);
		free(r2);
		free(r3);
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

int countEvens(int *arr, int size){
	int count = 0;
	int index = 0;
	for (index = 0; index < size; index++){
		if (arr[index] %2 == 0){
			count++;
		}
	}
	return count;
}

void copyEvens(int *source, int size, int *destination){
	int ind1 =0, ind2= 0;
	for (ind1 = 0; ind1 < size; ind1++){
		if (source[ind1] % 2 == 0){
			destination[ind2++] = source[ind1];
		}
	}
	return;
}

int main(){
	int size;
	int *arr1 = NULL;
        int *arr2 = NULL;
	int numEvens = 0;
	/*printf("Give the size: ");
	scanf("%d",&size);*/
	size = 10000;
	arr1 = malloc(size * sizeof(int));
        if (arr1 == NULL){
		printf("Can't allocate that much\n");
		exit(-1);
	}
	fillArr(arr1,size);
	numEvens = countEvens(arr1,size);
	arr2 = calloc(numEvens, sizeof(int));
	copyEvens(arr1, size, arr2);

	printf("arr1:");
	printArr(arr1,size);
	printf("arr2:");
	printArr(arr2,numEvens);

	free(arr1);
	free(arr2);
	arr1 = NULL;
	arr2 = NULL;
	return 0;
}
