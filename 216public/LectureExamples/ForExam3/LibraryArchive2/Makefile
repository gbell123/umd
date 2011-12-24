CC = gcc
CFLAGS = -ansi -Wall -Werror -pedantic-errors -I../LibraryNone

LIBRARY_TO_CREATE = libMyArchive.a
OBJS = first.o second.o

all: $(LIBRARY_TO_CREATE) main_run

main_run: main.o $(LIBRARY_TO_CREATE)
	$(CC) -o main_run main.o -L. -lMyArchive

$(LIBRARY_TO_CREATE): $(OBJS)
	ar cru $(LIBRARY_TO_CREATE) $(OBJS)


clean:
	rm $(OBJS) main.o main_run libMyArchive.a
