CC = gcc
CFLAGS =  -Wall -Werror -fPIC
LIBFLAGS = -nostdlib -shared -fPIC -Wl,-soname,$@.1

all: libMyDynLib.so main_run

libMyDynLib.so: first.o second.o 
	$(CC) $(LIBFLAGS) first.o second.o -o libMyDynLib.so.1
	ln -s -f libMyDynLib.so.1 libMyDynLib.so

main_run: main.o
	$(CC) -rdynamic -ldl -o main_run main.o

clean:
	rm *.o lib*so* main_run
