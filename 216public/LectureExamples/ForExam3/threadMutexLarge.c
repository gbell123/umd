/* Includes */
#include <unistd.h>     /* Symbolic Constants */
#include <sys/types.h>  /* Primitive System Data Types */ 
#include <errno.h>      /* Errors */
#include <stdio.h>      /* Input/Output */
#include <stdlib.h>     /* General Utilities */
#include <pthread.h>    /* POSIX Threads */
#include <string.h>     /* String handling */
#define SIZE 4

/* prototype for thread routine */
void *handler ( void *ptr );

/* global vars */
/* mutex are declared global so they can be accessed 
   in main() and in thread routine,
   here*/

static pthread_mutex_t mutex ;
		/*init replaces =THREAD_MUTEX_INITIALIZER;*/
int counter; /* shared variable */

int main()
{
    int cnt; /*loop control variable */
    int i[SIZE];
  
    pthread_t threads[SIZE];
    

    for (cnt = 0; cnt < SIZE; cnt++){
    	i[cnt] = cnt;
    }
    
    if (pthread_mutex_init(&mutex, NULL)){      /* initialize mutex*/ 
	printf("ERROR on INIT of MUTEX\n");
	exit(-1);
    }
                                 
    for (cnt = 0; cnt < SIZE; cnt++){
    	if( pthread_create (&threads[cnt], NULL, handler, (void *) &i[cnt])){
        	printf("ERROR on create1\n");
		exit(-1);
	}
    }
    
    for (cnt = 0; cnt < SIZE; cnt++){
    	if (pthread_join(threads[cnt], NULL)){
		printf("error on join\n");
		exit(-1);
	}
    }

   
    if (pthread_mutex_destroy(&mutex)){ /* destroy semaphore */
                printf("error destroying\n"); 
		exit(-1);
   }
    
    exit(0);
} 

void *handler ( void *ptr )
{
    int x; 
    x = *((int *) ptr);
    printf("Thread %d: *** Waiting to enter critical region...\n", x);
    pthread_mutex_lock(&mutex);       /* down semaphore */
    /* START CRITICAL REGION */
    printf("Thread %d: Now in critical region...\n", x);
    printf("Thread %d: Counter Value: %d\n", x, counter);
    printf("Thread %d: Incrementing Counter...\n", x);
    counter++;
    printf("Thread %d: New Counter Value: %d\n", x, counter);
    printf("Thread %d: Exiting critical region...\n", x);
    /* END CRITICAL REGION */    
    pthread_mutex_unlock(&mutex);       /* up semaphore */
    
    pthread_exit(0); /* exit thread */
}
