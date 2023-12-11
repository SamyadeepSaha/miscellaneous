# Makefile

# Complier
CC = gcc

# C flags
CFLAGS = `pkg-config --cflags gtk+-3.0`
LIBS = `pkg-config --libs gtk+-3.0`

all: main
	@echo "Compile successful"

main: main.c
	${CC} ${CFLAGS} -o $@ $< ${LIBS}

example-0: example-0.c
	${CC} ${CFLAGS} -o $@ $< ${LIBS}

clean:
	rm main example-0
