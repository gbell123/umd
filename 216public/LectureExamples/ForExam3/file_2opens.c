#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sysexits.h>
#include <err.h>
#define MAX 10

int main() {
  int fd1, fd2;
  char buffer[MAX];
  char new_line[] = "\n";
  fd1 = open("file.txt", O_RDONLY);
  if (fd1 < 0){
    perror("can't open new-file.txt for read");
    return(-2);
  }
  fd2 = open("file.txt", O_RDONLY);
  if (fd2 < 0){
    perror("can't open new-file.txt for read");
    return(-2);
  }

  read(fd1, buffer, MAX);
  write(1,buffer,MAX);
  write(1,new_line,1);

  read(fd1, buffer, MAX);
  write(1,buffer,MAX);
  write(1,new_line,1);

  read(fd1, buffer, MAX);
  write(1,buffer,MAX);
  write(1,new_line,1);
  write(1,new_line,1);

/*switch to the other file descript# */
  read(fd2, buffer, MAX);
  write(1,buffer,MAX);
  write(1,new_line,1);

  read(fd2, buffer, MAX);
  write(1,buffer,MAX);
  write(1,new_line,1);

  read(fd2, buffer, MAX);
  write(1,buffer,MAX);
  write(1,new_line,1);

  return 0;

  close(fd1);
  close(fd2);

  return 0;
}


