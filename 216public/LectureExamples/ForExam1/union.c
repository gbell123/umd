#include <stdio.h>

typedef union{ 
	int a;
	float b;
} Number;

int main(){
    	Number num;
	num.a = 99;
	printf("a = %d\n",num.a);
	num.b = 3.14159;
	printf("b = %f\n",num.b);
	printf("PROBLEM: a = %d\n",num.a);
	return 0;
}
