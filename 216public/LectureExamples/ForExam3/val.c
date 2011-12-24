#include <stdio.h>
#include <sys/time.h>
#include "resource.h"
#include <time.h>
#include <stdlib.h>

#define ROWS 5000
#define COLS ROWS

int arr[ROWS][COLS];

int main() {
    int i, j, sum = 0;
    struct rusage usage1, usage2;
    time_t seconds;
    time(&seconds);
    srand((unsigned int)seconds);

    char	*ptr = malloc(32);

   for (i = 0; i < ROWS; i++)
	for (j = 0; j < COLS; j++)
	    arr[i][j] = rand();
    getrusage(RUSAGE_SELF, &usage1);
	for (i = 0; i < ROWS; i++)
    for (j = 0; j < COLS; j++)
	    sum += arr[i][j];
    getrusage(RUSAGE_SELF, &usage2);
    sprintf(ptr, "sum = %d\n", sum);
    printf(ptr);
    /* calculate user time, store in usage2 */
    printf("User time %d.%06ds\n", (int) usage2.ru_utime.tv_sec,
	   (int) usage2.ru_utime.tv_usec);
    return 0;
}

