CC=gcc
CFLAGS = -fPIC -Wall -Wextra -c
LIBS = -lhello -lstudent -lhellocpp
LIBPATHS = -L../hello -L../student -L../hellocpp
RM= rm -f
INC=-I../hello -I../student -I../hellocpp
.PHONY: all clean


all: testapp

clean:
	$(RM) *.o *.so

testapp: testapp.o
	$(CC) -o testapp testapp.o $(LIBPATHS) $(LIBS)

testapp.o: testapp.c
	$(CC) $(CFLAGS) $(INC) testapp.c -o testapp.o
	cp ../hello/libhello.so .
	cp ../hellocpp/libhellocpp.so .
	cp ../student/libstudent.so .

