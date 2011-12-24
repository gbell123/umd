#include <stdio.h>

void print_it(void *vp, char val_type){
   switch(val_type){
	case 'i':
	case 'I':
   		printf("%d\n",*(int*)vp);
		break;
	case 'f':
	case 'F':
   		printf("%.2f\n",*(double*)vp);
		break;
	default:
		printf("neither int nor char\n");
		break;
   }
   return;
}
int main(){

   void *vp;
   int a = 6, *ip;
   double b = 3.14, *dp;
   vp = &a;
   ip = vp;
   printf("%d\n",*ip);
   print_it(vp,'I');
   printf("going wrong: ");
   print_it(vp,'f');

   vp = &b;
   dp = vp;
   printf("%.2f\n",*dp);
   print_it(vp,'F');
   printf("going wrong: ");
   print_it(vp,'i');

   return 0;
}
