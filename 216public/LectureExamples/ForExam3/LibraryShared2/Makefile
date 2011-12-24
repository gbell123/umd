CC = gcc
CFLAGS = -ansi -pedantic-errors -Wall -Werror -fPIC -I../LibraryShared1

main_run: main.o
	$(CC) -o main_run main.o -L../LibraryShared1 -lMySharedLib

clean: 
	rm *.o main_run
