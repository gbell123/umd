#include <stdio.h>
#include <time.h>
 
int main(void)
{
    time_t     now;
    struct tm  *ts;
 
    /* Get the current time */
    now = time(0);
    ts = localtime(&now);

    printf("time = %d:%02d:%02d\n", 
	ts->tm_hour,ts->tm_min, ts->tm_sec);
 
    return 0;
}
