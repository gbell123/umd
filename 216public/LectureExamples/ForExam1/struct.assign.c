#include <stdio.h>
#include <string.h>

typedef struct{
   char name[20];
   int age;
} Person;

void printPerson(Person p){
   printf("%s is %d years old\n", p.name, p.age);
}

int main(){
   Person p1 = {"Jan",21};
   Person p2 = {"Fred", 10};
   Person p3 = p1;

   printf("three people:\n");
   printPerson(p1);
   printPerson(p2);
   printPerson(p3);

   p1.age = 99;
   strcpy(p3.name, "Joseph");
   printf("\n");
   printf("three people:\n");
   printPerson(p1);
   printPerson(p2);
   printPerson(p3);

   return 0;
}
