#include	<stdio.h>
#include	<stdlib.h>
#include	<err.h>


int main() {
    int fd[2];
    char buf[BUFSIZ];  /* BUFSIZ is defined in stdio.h */

    if (pipe(fd) < 0)
	err(1, "pipe error");   
    if (fork()) {  /* parent code */
	close(fd[1]);
	read(fd[0], buf, BUFSIZ);
	printf("Message from child: %s\n", buf);
    }
    else {  /* child code */
	char msg[] = "Hi there!";
	close(fd[0]);
	write(fd[1], msg, sizeof(msg));
    }
    return 0;
}
