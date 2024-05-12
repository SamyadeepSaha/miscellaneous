# Makefile

# Just edit filename before make
BIN = gtktest
SRC = gtktest.c

# Complier
CC = gcc

# C flags
CFLAGS = `pkg-config --cflags gtk+-3.0`
LIBS = `pkg-config --libs gtk+-3.0`

${BIN}: ${SRC}
	${CC} ${CFLAGS} -o $@ $< ${LIBS}

run:
	./${BIN}

clean:
	rm ${BIN}
