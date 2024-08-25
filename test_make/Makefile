# Compiler
CC = gcc

# Flags
CFLAGS = -Wall -std=c99

all: main.o lib.o
	${CC} ${CFLAGS} -o prog main.o lib.o

main.o: main.c
	${CC} ${CFLAGS} -o main.o -c main.c

lib.o: lib.c
	${CC} ${CFLAGS} -o lib.o -c lib.c
