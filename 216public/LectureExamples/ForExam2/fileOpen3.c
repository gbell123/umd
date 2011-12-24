#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* same as 0666, but a bit more symbolic */
#define DEF_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH)
#define MAX 10

int main() {
  char in_filename[MAX];
  char out_filename[MAX];
  char buffer[MAX];
  char new_line[] = "\n";
  int fd_in, fd_out;

  printf("name of the input file (short): ");
  scanf("%s",in_filename);
  printf("name of the output file (short): ");
  scanf("%s",out_filename);
  if ((fd_in = open(in_filename, O_RDONLY)) < 0){
    perror("can't open missing-file.txt for read");
    return(-1);
  }

  fd_out = open(out_filename, O_WRONLY|O_APPEND|O_CREAT, DEF_MODE);
  if (fd_out < 0){
    perror("can't open new-file.txt for write");
    return(-2);
  }
  while (read(fd_in,buffer,MAX) > 0){
     write(fd_out,buffer,MAX);
     write(fd_out,new_line,1);
  }
  close(fd_in);
  close(fd_out);

  return 0;
}

