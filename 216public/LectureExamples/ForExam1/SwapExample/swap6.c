#include <stdio.h>

typedef struct {
	int a;
	int b;
} Two_vals;

void swap(int *a, int *b){
    	int temp = 0;

	printf("     beginning of swap: a and b are now: %d and %d\n",*a,*b);
	temp = *a;
	*a = *b;
	*b = temp;
	printf("     end of swap:       a and b are now: %d and %d\n",*a,*b);

	return;
}


int main(){
	Two_vals mine = {9,42};

	printf("beginning: a and b are %d and %d\n",mine.a,mine.b);
	swap(&(mine.a),&(mine.b));
	printf("end:       a and b are %d and %d\n",mine.a,mine.b);

	return 0;
}
