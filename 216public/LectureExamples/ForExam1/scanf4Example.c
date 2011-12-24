#include <stdio.h>
#include <string.h>

int main(){
	char name_first[50] = "";
	char name_last[50] = "";
	scanf("%s",name_last);
	scanf("%s",name_first);
	name_last[strlen(name_last)-1] = '\0';
	printf("%s %s\n",name_first, name_last);
	return 0;
}
