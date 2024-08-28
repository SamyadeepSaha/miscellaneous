# Makefile

# Complier
CC = gcc

# C flags
CFLAGS = -Wall -std=c99
LIBS = -lsqlite3

all: retrieve
	@echo "Select a target"

version: version.c
	${CC} -o version version.c ${CFLAGS}

version2: version2.c
	${CC} -o version2 version2.c ${CFLAGS}

insert_data: insert_data.c
	${CC} -o $@ $< ${CFLAGS}

retrieve: retrieve.c
	${CC} ${CFLAGS} -o $@ $< ${LIBS}

last_row_id: last_row_id.c
	${CC} -o $@ $< ${CFLAGS}
