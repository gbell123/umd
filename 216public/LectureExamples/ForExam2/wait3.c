#include <sys/wait.h>
#include <sysexits.h>
#include <stdlib.h>
#include <err.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>


int main() {
  pid_t child_pid;
  if ((child_pid = fork()) < 0)
    err(EX_OSERR, "fork error");
  if (child_pid) {  /* parent code */
    int status=-99;
    wait(&status);  /* waits for and reaps child 
			and gets status*/
    printf("Parent pid = %d; my child had pid = %d\n",
           getpid(), child_pid);
    if (WIFEXITED(status)){
	printf("success\n");
    }else{
	printf("NOT success\n");
    }
    printf("returned = %d\n", status);
    printf("actual status =%d\n",WEXITSTATUS(status));
    printf("terminating signal = %d\n",WTERMSIG(status));
  }
  else {  /* child code */
    printf("Child pid = %d; my parent has pid = %d\n",
           getpid(), getppid());
  }
  exit(7);
}

