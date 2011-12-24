#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	FILE *fp = NULL;
	int ch = 0;
	int col = 0;

	fp = fopen("fileInput.txt", "r");
	if (!fp){
		perror("Can't open fileInput.txt");
		exit (EXIT_FAILURE);
	}

	printf("read these characters:\n");
	while((ch = fgetc(fp)) != EOF){
		if (isalpha(ch)){
			printf("%c",ch);
			col++;
		}
		if (col == 20){
			printf("\n");
			col = 0;
		}
	}
	if (fclose(fp)){
		perror("Can't close fileInput.txt");
  		exit (EXIT_FAILURE); 
	} else {
		exit (EXIT_SUCCESS);
	}
}
