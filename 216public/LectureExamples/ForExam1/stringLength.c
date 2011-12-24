#include <stdio.h>

int slen1(char[]);
int slen2(char[]);
void psize(char[]);

int main(){
   char name1[] = "Jandelyn";
   char name2[20] = "Plane";
   char name[100] = "Jan";
   printf("string length name1 = %d\n",slen1(name1));
   printf("string length name2 = %d\n",slen1(name2));
   printf("string length name = %d\n",slen1(name));
   printf("\n");
   printf("string length name1 = %d\n",slen2(name1));
   printf("string length name2 = %d\n",slen2(name2));
   printf("string length name = %d\n",slen2(name));
   printf("\n");
   printf("sizeof name1 = %ld\n",sizeof(name1));
   printf("sizeof name2 = %ld\n",sizeof(name2));
   printf("sizeof name = %ld\n",sizeof(name));
   printf("\n");
   printf("psize of name1:");
   psize(name1);
   printf("psize of name2:");
   psize(name2);
   printf("psize of name:");
   psize(name);
   return 0;
}

int slen1(char n[]){
   int count = 0;
   while (n[count] != '\0'){
	count++;
   }
   return count;
}
int slen2(char n[]){
   int count = 0;
   for ( ;n[count];count++);
   return count;
}
   
void psize(char n[]){
   printf("size of n in function = %ld\n",sizeof(n));
}
