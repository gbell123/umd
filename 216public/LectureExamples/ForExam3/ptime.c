#include	<stdio.h>
#include	<time.h>
#include	<sys/time.h>
#include 	<sys/resource.h>
#include 	<unistd.h>

void func(clock_t *a, time_t *b, struct tm *c, struct timeval *d) {
}

void main()
{
    clock_t		clock;
    time_t		time;
    struct tm		tm;	
    struct timeval	timeval;
    struct rusage	rus;

    //func(&clock, &time, &tm, &timeval);

    printf("%d %d %d %d %d\n", sizeof(clock), sizeof(time), sizeof(tm), /*  */
	   sizeof(timeval), sizeof(rus));

}
