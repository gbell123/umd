#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct node{
   int *arr;
   int size;
   struct node* next;
} Node;

void fillArr(int *arr, int size){
	int randVal = 0;
	int index;

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

void fill_node(Node **curr, int size){
	*curr = malloc(sizeof(Node));
        (*curr)-> size = size;
	(*curr)-> arr= malloc(size * sizeof(int));
        if ((*curr)->arr == NULL){
		printf("Can't allocate that much\n");
		exit(-1);
	}
	
	fillArr((*curr)->arr, size);
}
int main(){
	int max, cnt;
        Node * head = NULL;
	Node *curr = NULL;
        time_t seconds;
        time(&seconds);
	srand((unsigned int) seconds);
	while ((max = rand()%5) != 0){
          fill_node(&curr,max);
	  curr->next = head;
          head = curr;
	}
	curr = head;
	cnt = 0;
        while(curr!=NULL){
		printf("Node #%d\n",cnt++);
		printArr(curr->arr,curr->size);
		printf("\n");
		curr=curr->next;
	}
	return 0;
}
