#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp = NULL;

	fp = fopen("fileInput.txt", "r");
	if (!fp){
		perror("Can't open fileInput.txt");
		exit (EXIT_FAILURE);
	}

	printf("opened fileInput.txt\n");	
	if (fclose(fp)){
		perror("Can't close fileInput.txt");
  		exit (EXIT_FAILURE); 
	} else {
		exit (EXIT_SUCCESS);
	}
}
