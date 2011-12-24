#include <stdio.h>
#include <string.h>

/***************** 
The purpose of this example is to make you think about which of these is
correct and which is not correct.  Which gives the correct, meaningful output? 
******************/
int main(){

   	char name1[20] = "Jan";
        char name2[20] = "Plane";
        char name3[40] = "Jan";

        if (strcmp(name1,name2)){
		printf("%s != %s\n",name1,name2);
        } else {
		printf("%s == %s\n",name1,name2);
	}
        if (name1!=name3){
		printf("%s != %s\n",name1,name3);
        } else {
		printf("%s == %s\n",name1,name3);
	}
        if (strcmp(name1,name3)==0){
		printf("%s != %s\n",name1,name3);
        } else {
		printf("%s == %s\n",name1,name3);
	}
        if (strcmp(name1,name2)<0 || strcmp(name1,name2)>0){
		printf("%s != %s\n",name1,name2);
        } else {
		printf("%s == %s\n",name1,name2);
	}
        if (name1!=name2){
		printf("%s != %s\n",name1,name2);
        } else {
		printf("%s == %s\n",name1,name2);
	}
	return 0;
}
