#include <stdio.h>

int main(){
   unsigned int a = 0x5555ffff, b = 0xaaaa1111;
   unsigned int ones = 0;
   ones = ~ones;
   printf("a = \t%08x\n",a);
   printf("b = \t%08x\n",b);
   printf("ones = \t%08x\n\n",ones);
   printf("a AND b (a&b): \t\t%08x\n",     a & b);
   printf("a AND 0 (a&0): \t\t%08x\n",      a & 0);
   printf("a AND ones (a&ones): \t%08x\n",a & ones);
   printf("a OR b (a|b): \t\t%08x\n",       a | b);
   printf("a OR 0 (a|0): \t\t%08x\n",       a | 0);
   printf("a OR ones(a|ones): \t%08x\n",  a | ones);
   printf("a XOR b (a^b): \t\t%08x\n",      a ^ b);
   printf("a XOR 0 (a^0): \t\t%08x\n",      a ^ 0);
   printf("a XOR ones (a^ones): \t%08x\n",a ^ ones);
   printf("Complement of a (~a): \t%08x\n",~a);
   printf("and logical operators\n");
   printf("a && b: \t%08x = %d\n", a&&b, a&&b);
   printf("a || b: \t%08x = %d\n", a||b, a||b);
   printf("!a: \t%08x = %d\n"    , !a,   !a);
   printf("!0: \t%08x = %d\n",     !0,   !0);
   printf("!ones: \t%08x = %d\n",  !ones,!ones);
   return 0;
}
