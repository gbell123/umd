#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 5

int main(){
	FILE *fp = NULL;
	char lineIn[MAX] = "";

	fp = fopen("fileInput.txt", "r");
	if (!fp){
		perror("Can't open fileInput.txt");
		exit (EXIT_FAILURE);
	}

	printf("read these characters:\n");
	while(fgets(lineIn,MAX,fp)){
		printf("-%s-",lineIn);
	}
	if (fclose(fp)){
		perror("Can't close fileInput.txt");
  		exit (EXIT_FAILURE); 
	} else {
		printf("\n");
		exit (EXIT_SUCCESS);
	}
}
