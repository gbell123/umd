#include <stdio.h>

void print_decimal(unsigned int i) {
  printf("decimal: %u\n", i);
}

void print_hex(unsigned int i) {
  printf("hex: %x\n", i);
}

void print_octal(unsigned int i) {
  printf("octal: %o\n", i);
}

int main(){

	void (*fp)(unsigned int);
 	unsigned int val = 16;	

	fp = print_hex;
	fp(val);  /* prints "10" */
	fp = &print_octal;
	fp(val);  /* prints "20" */
	fp = print_decimal;
	(*fp)(val);  /* prints "16" */

	return 0;
}

