#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 5

void removeNewLine(char line[]);

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
		removeNewLine(lineIn);
		printf(lineIn);
	}
	if (fclose(fp)){
		perror("Can't close fileInput.txt");
  		exit (EXIT_FAILURE); 
	} else {
		printf("\n");
		exit (EXIT_SUCCESS);
	}
}

void removeNewLine(char line[]){
	int index = 0;
	for(index = 0; line[index]; index++){
		if (line[index] == '\n'){
			line[index] = ' ';
		}
	}
}
