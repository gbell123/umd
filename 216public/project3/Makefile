CC = gcc
CFLAGS = -ansi -pedantic-errors -Wall -Werror -g -DNUM_BUCKETS=5
PROGS = hashtester public00 public01 public02 \
	public03 public04 public05 \
	secret00 secret01 secret02 secret03 secret04 secret05 secret06 \
	secret07 secret08 secret09
#	secret10 secret11 secret12 secret13 secret14

.PHONY: all clean

all: $(PROGS)

clean:
	rm -f public*.o hashtable.o $(PROGS) *.tgz

$(PROGS): hashtable.o
hashtester: hashtester.o
public%: public%.o
secret%: secret%.o

hashtester.o: hashtable.h
hashtable.o: hashtable.h
public%.o: hashtable.h
secret%.o: hashtable.h

