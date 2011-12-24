#include <stdio.h>

int main(){
	long ans1, ans2;
  	ans1 = 30000000 * 30000000;
        ans2 = 30000000L * 30000000L;
	printf("ans1 = %ld\nans2 = %ld\n",ans1,ans2);
	return 0;
}
