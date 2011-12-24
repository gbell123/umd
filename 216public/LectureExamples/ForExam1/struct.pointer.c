#include <stdio.h>

typedef struct {
  int number, num_students, start_time;
} Section;

void printSection(Section sec){
   printf("Section %d: %d students at %d\n",
	sec.number, sec.num_students, sec.start_time);
}
void add_students1(Section sec,
                  int students_to_add){
  sec.num_students += students_to_add;
}
void add_students2(Section *sec,
                  int students_to_add){
  sec->num_students += students_to_add;
  /* (*sec).num_students += students_to_add; */
}
int main(){
   Section s = {101, 25, 1300};
   printf("Before any Call: ");
   printSection(s);
   add_students1(s, 5);
   printf("After 1st Call:  ");
   printSection(s);
   add_students2(&s, 5);
   printf("After 2nd Call:  ");
   printSection(s);
   return 0;
}
