#include <stdio.h>
#include <stdlib.h>

int main(){
	int hrs=0, mins=0;

   /*when running - do this one right */
	printf("enter a time in the form of hr:min --- ");
	scanf("%d:%d",&hrs,&mins);
	printf("It is %d:%d\n",hrs,mins);

   /*when running - but on this one put in two numbers that are space delimited*/
	printf("enter anohter time in the form of hr:min --- ");
	scanf("%d:%d",&hrs,&mins);
	printf("It is %d:%d\n",hrs,mins);
	return 0;
}
