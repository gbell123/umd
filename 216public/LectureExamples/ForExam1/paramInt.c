#include <stdio.h>

int abs_value(int x) {
  if (x < 0)
    x = -x;
  return x;
}

int main() {
  int n = -17, a;
  a = abs_value(n);
  printf("%d %d\n", a, n);
  return 0;
}

