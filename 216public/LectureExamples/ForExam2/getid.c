#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	printf("%d\n",getpid());
  	printf("%d\n",getppid());
	return 0;
}
