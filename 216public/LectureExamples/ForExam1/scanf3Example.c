#include <stdio.h>
#include <stdlib.h>

int main(){
	int hrs=0, mins=0;

   /*when running - do this one right */
	printf("enter a time in the form of hr:min --- ");
	if (scanf("%d:%d",&hrs,&mins)==2){
		printf("It is %d:%d\n",hrs,mins);
	} else {
		fprintf(stderr,"bad time format\n");
		exit(EXIT_FAILURE);	
	}

   /*when running - but on this one put in two numbers that are space delimited*/
	printf("enter anohter time in the form of hr:min --- ");
	if (scanf("%d:%d",&hrs,&mins)==2){
		printf("It is %d:%d\n",hrs,mins);
	} else {
		fprintf(stderr,"bad time format\n");
		exit(EXIT_FAILURE);	
	}
	return 0;
}
