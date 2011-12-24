#include <stdio.h>

typedef struct {
	int a;
	int b;
} Two_vals;

void swap(Two_vals local){
    	int temp = 0;

	printf("     beginning of swap: a and b are now: %d and %d\n",local.a,local.b);
	temp = local.a;
	local.a = local.b;
	local.b = temp;
	printf("     end of swap:       a and b are now: %d and %d\n",local.a,local.b);

	return;
}


int main(){
	Two_vals mine = {9,42};

	printf("beginning: a and b are %d and %d\n",mine.a,mine.b);
	swap(mine);
	printf("end:       a and b are %d and %d\n",mine.a,mine.b);

	return 0;
}
