#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sysexits.h>
#include <err.h>
#include <err.h>
#include <string.h>

#define MAX 10

int main() {
  pid_t child_pid;
  char buffer[MAX];
  char new_line[] = "\n";
  char parent[] = "Parent:";
  int fd1 = open("file.txt", O_RDONLY);
  if (fd1 < 0){
    perror("can't open file.txt for read");
    return(-2);
  }
  if ((child_pid = fork()) < 0)
    err(EX_OSERR, "fork error");
  if (child_pid) {  /* parent code */
	wait(NULL);
  	read(fd1, buffer, MAX);
	write(STDOUT_FILENO,parent,strlen(parent));
  	write(STDOUT_FILENO,buffer,MAX);
  	write(STDOUT_FILENO,new_line,1);
	
  	read(fd1, buffer, MAX);
	write(STDOUT_FILENO,parent,strlen(parent));
  	write(STDOUT_FILENO,buffer,MAX);
  	write(STDOUT_FILENO,new_line,1);
	
  	read(fd1, buffer, MAX);
	write(STDOUT_FILENO,parent,strlen(parent));
  	write(STDOUT_FILENO,buffer,MAX);
  	write(STDOUT_FILENO,new_line,1);
  	write(STDOUT_FILENO,new_line,1);
  }
  else {  /* child code */
  	read(fd1, buffer, MAX);
  	write(STDOUT_FILENO,buffer,MAX);
  	write(STDOUT_FILENO,new_line,1);
	
  	read(fd1, buffer, MAX);
  	write(STDOUT_FILENO,buffer,MAX);
  	write(STDOUT_FILENO,new_line,1);
	
  	read(fd1, buffer, MAX);
  	write(STDOUT_FILENO,buffer,MAX);
  	write(STDOUT_FILENO,new_line,1);
  	write(STDOUT_FILENO,new_line,1);
  }
  return 0;
}

