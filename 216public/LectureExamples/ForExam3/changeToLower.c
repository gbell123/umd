#define MAX 100
#define SIZE 1000
#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main(){
	int i = 0, j = 3, k = 10;
	int arr[SIZE] = {0};
	char str[MAX] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (i = 0; i < strlen(str); i++){
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}
	printf("%s\n",str);
	for (i = 0; i < 200; i++){
		arr[2 * j + i] = j * k + i;
	}
	printf("%d\n",arr[0]);
	return 0;
}
