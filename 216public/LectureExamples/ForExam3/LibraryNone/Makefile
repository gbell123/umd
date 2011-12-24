CC = gcc
CFLAGS = -ansi -pedantic-errors -Wall -Werror 

main_run: first.o second.o main.o
	$(CC) -o main_run first.o second.o main.o

clean:
	rm *.o main_run
