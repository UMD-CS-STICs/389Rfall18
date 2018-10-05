CC = gcc

all: buffer

buffer: buffer.c
	gcc buffer.c -o buffer -fno-stack-protector -no-pie

clean:
	rm buffer

test:
	printf "aaaabbbbccccddddeeeeffffgggghhhh" | ./buffer

.PHONY: all clean test
