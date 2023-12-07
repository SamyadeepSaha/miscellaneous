# Makefile

# Complier
CC = gcc

# C flags
CFLAGS = -Wall -lsqlite3 -std=c99

all:
	@echo "Select a target"

version: version.c
	${CC} -o version version.c ${CFLAGS}

version2: version2.c
	${CC} -o version2 version2.c ${CFLAGS}

insert_data: insert_data.c
	${CC} -o $@ $< ${CFLAGS}
