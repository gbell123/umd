#include <stdio.h>
#include <sys/time.h>
#include "resource.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <malloc.h>

#define ROWS 10000
#define COLS ROWS

int arr[ROWS][COLS];

struct timeval tv_delta(struct timeval start, struct timeval end);
int main() {
    int i, j;
    long sum = 0;
    struct rusage start_ru, end_ru;
    struct timeval diff_ru;
    
/*
    time_t seconds;
    time(&seconds);
    srand((unsigned int)seconds);
*/
    srand(0);

    for (i = 0; i < ROWS; i++)
	for (j = 0; j < COLS; j++)
	    arr[i][j] = rand();
    getrusage(RUSAGE_SELF, &start_ru);
    for (j = 0; j < COLS; j++)
        for (i = 0; i < ROWS; i++)
	    sum += arr[i][j];
    getrusage(RUSAGE_SELF, &end_ru);
    printf("sum = %ld\n", sum);

    diff_ru=tv_delta(start_ru.ru_utime,end_ru.ru_utime);

    printf("usertime: %ld.%06ld\n", 
      	diff_ru.tv_sec, 
	diff_ru.tv_usec);

    return 0;
}


struct timeval tv_delta(struct timeval start, struct timeval end)
{
  struct timeval delta = end;
  delta.tv_sec -= start.tv_sec;
  delta.tv_usec -= start.tv_usec;
  if (delta.tv_usec < 0) {
    delta.tv_usec += 1000000;
    delta.tv_sec--;
  }
  return delta;
}
