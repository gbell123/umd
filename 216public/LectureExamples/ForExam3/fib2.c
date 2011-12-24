#include <stdio.h>
#include <stdlib.h>

/* Return the nth Fibonacci number 
 * (fib(0) = fib(1) = 1)
 */


unsigned long fib(unsigned int n) {
    static int table[100] = { 1, 1, 0 };

    if (table[n])
	return table[n];

    return table[n] = fib(n-1) + fib(n-2);
}

int main(int argc, char *argv[]) {
    int num = atoi(argv[1]);
    printf("%lu\n", fib(num));
    return 0;
}
