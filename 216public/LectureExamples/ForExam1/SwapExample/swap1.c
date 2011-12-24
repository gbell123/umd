#include <stdio.h>

void swap(int a, int b){
    	int temp = 0;

	printf("     beginning of swap: a and b are now: %d and %d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("     end of swap:       a and b are now: %d and %d\n",a,b);
	return;
}


int main(){
 	int x = 9, y = 42;
	printf("beginning: x and y are %d and %d\n",x,y);
	swap(x,y);
	printf("end:       x and y are %d and %d\n",x,y);
	return 0;
}
