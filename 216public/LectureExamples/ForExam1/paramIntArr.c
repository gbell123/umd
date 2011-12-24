#include <stdio.h>
#define SIZE 3

void multiply_int(int factor, int arrayElement){
   arrayElement *= factor;
   printf("inside: int value = %d\n",arrayElement);
}
void multiply_array(int factor, int arr[], int ct) {
  int i;
  printf("size of arr is %d\n",(int)sizeof(arr));
  for (i = 0; i < ct; i++)
    arr[i] *= factor;
}

int main() {
  int a[SIZE] = {1, 2, 3};
  int b = 7; 
  printf("size of array in bytes = %d\n",(int)sizeof(a));
  printf("before: [%d, %d, %d]\n", a[0], a[1], a[2]);
  multiply_array(5, a, SIZE);
  printf("afer: [%d, %d, %d]\n\n", a[0], a[1], a[2]);

  printf("before: a[0] = %d\n",a[0]);
  multiply_int(5,a[0]);
  printf("after: a[0] = %d\n\n",a[0]);

  printf("before: b = %d\n",b);
  multiply_int(5,b);
  printf("after: b = %d\n\n",b);

  printf("before: 5 = %d\n",5);
  multiply_int(5,5);
  printf("after: 5 = %d\n\n",5);

  return 0;
}

