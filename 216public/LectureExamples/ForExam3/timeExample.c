#include <stdio.h>
#include <time.h>
 
/*
* The result should look something like
* Fri 2008-08-22 15:21:59 WAST
*/
 
int main(void)
{
    time_t     now;
    struct tm  *ts;
    char       buf[80];
 
    /* Get the current time */
    now = time(0);
 
    /* Format and print the time, */
    /* "ddd yyyy-mm-dd hh:mm:ss zzz" */
    ts = localtime(&now);
    strftime(buf, sizeof(buf),
		"%a %Y-%m-%d %H:%M:%S %Z", ts);
    printf("%s\n", buf);
 
    return 0;
}
