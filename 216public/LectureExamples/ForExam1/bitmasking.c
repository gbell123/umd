#include <stdio.h>

int main(){
unsigned char clear24;
unsigned char set24;
unsigned char first = 0xab; /* 0xfirst: 1010 1011 */
unsigned char second = 0x15; /* 0xsecond: 0001 0101*/
clear24 = first & 0x8f;  
set24 = first | 0x70;  
printf("first = %02x\n",first);
printf("clear24 = %02x\n",clear24);
printf("set24 = %02x\n\n",set24);

clear24 = second & 0x8f; 
set24 = second | 0x70;  
printf("second = %02x\n",second);
printf("clear24 = %02x\n",clear24);
printf("set24 = %02x\n",set24);

return 0;
}
