CC=g++
CFLAGS = -fPIC -Wall -Wextra -c
LDFLAGS = -shared
RM= rm -f
INC=../hellocpp
.PHONY: all clean


all: libhellocpp.so

clean:
	$(RM) *.o *.so

libhellocpp.so: hello_cpp.o
	$(CC) $(LDFLAGS) -o libhellocpp.so hello_cpp.o

hello_cpp.o: hello_cpp.cpp hello_cpp.h
	$(CC) $(CFLAGS) -I$(INC) hello_cpp.cpp -o hello_cpp.o


