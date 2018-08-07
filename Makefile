CC = g++
CFLAGS = -Wall -g
TARGET = main
LDFLAGS = -lm

all: clean stream.o main.o main

stream.o : stream.h
	${CC} ${CFLAGS} -c stream.cpp

main.o : 
	${CC} ${CFLAGS} -c main.cpp
	
main : stream.o main.o
	${CC} ${CFALGS} stream.o main.o ${LDFLAGS} -o main

clean:
	rm -rf *.o
	rm -rf main
