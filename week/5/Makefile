CC = gcc

all: main

main: main.c myfuncs.o

myfuncs.o: myfuncs.S
	yasm -f elf64 myfuncs.S

clean:
	rm myfuncs.o main

.PHONY: clean
