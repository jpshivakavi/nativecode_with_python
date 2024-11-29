CC=gcc
CFLAGS = -fPIC -Wall -Wextra -c
LDFLAGS = -shared
RM= rm -f
INC=../hello
.PHONY: all clean


all: libhello.so

clean:
	$(RM) *.o *.so

libhello.so: hello.o
	$(CC) $(LDFLAGS) -o libhello.so hello.o

hello.o: hello.c hello.h
	$(CC) $(CFLAGS) -I$(INC) hello.c -o hello.o


