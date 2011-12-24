#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	FILE *fp = NULL;
	int ch = 0;

	fp = fopen("fileInput.txt", "r");
	if (!fp){
		perror("Can't open fileInput.txt");
		exit (EXIT_FAILURE);
	}

	printf("read these characters:\n");
	while((ch = fgetc(fp)) != EOF){
		printf("%c",ch);
	}
	if (fclose(fp)){
		perror("Can't close fileInput.txt");
  		exit (EXIT_FAILURE); 
	} else {
		exit (EXIT_SUCCESS);
	}
}
