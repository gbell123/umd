#include <stdio.h>
#include <stdlib.h>

/* Return the nth Fibonacci number 
 * (fib(0) = fib(1) = 1)
 */

static int table[100] = { 1, 1, 0 };


int main(int argc, char *argv[]) {
    int 	i, num = atoi(argv[1]);

    for (i = 2; i <= num; i++) {
	table[i] = table[i-1] + table[i-2];
    }
    printf("%u\n", table[num]);
    return 0;
}
