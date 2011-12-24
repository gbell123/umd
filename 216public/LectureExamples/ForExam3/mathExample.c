#include <math.h>
#include <stdio.h>

int main(){
   double inputVal, answer;
   printf("give value:");
   scanf("%lf",&inputVal);
   answer = sqrt(inputVal);
   printf("squareroot of %.2f = %.2f\n",inputVal,answer);
   return 0;
}
