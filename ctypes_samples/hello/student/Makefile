CC=gcc
CFLAGS = -fPIC -Wall -Wextra -c
LDFLAGS = -shared
RM= rm -f
INC=../student
.PHONY: all clean

all: libstudent.so

clean:
	$(RM) *.o *.so

libstudent.so: student.o
	$(CC) $(LDFLAGS) -o $@ $^

student.o: student.c student.h 
	$(CC) $(CFLAGS) -I$(INC) student.c -o student.o


