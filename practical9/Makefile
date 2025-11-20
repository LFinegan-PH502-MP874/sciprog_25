CC = gcc

all: main

main: main.o
	$(CC) main.o -o main

main.o: main.c magic_square.h
	$(CC) -c main.c

clean:
	rm -f *.o main
