#include <stdio.h>

int main() {
  int prev = 97;
  int arr[] = {2, 3, 5, 8, 13};
  int *ptr = &arr[2];
  printf("%d\n", ptr[2]);
  printf("%d\n", ptr[-1]);
  printf("%d\n", *(arr + 3));
  printf("%d\n", ++*ptr);
  printf("%d\n", arr[2]);
  printf("%d\n", *ptr++);
  printf("%d\n", *ptr);
  printf("%d\n", arr[-1]);
  printf("%d\n",prev);
  return 0;
}

