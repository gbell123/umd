CC = gcc
CFLAGS = -ansi -pedantic-errors -Wall -Werror -fPIC
LIBFLAGS = -nostdlib -shared -fPIC -Wl,-soname,$@.1

all: libMySharedLib.so main_run 

libMySharedLib.so: first.o second.o
	$(CC) $(LIBFLAGS) first.o second.o -o libMySharedLib.so.1
	ln -s -f libMySharedLib.so.1 libMySharedLib.so

main_run: main.o
	$(CC) -o main_run main.o -L. -lMySharedLib

clean:
	rm *.o main_run lib*so*
