# I am a comment, and I want to say that the variable CC will be
# the compiler to use.

#CC=arm-linux-gnueabihf-gcc
CC=gcc

#CC?=gcc
#CC:=gcc

# Hwy!, I am comment no.2. I want to say that CFLAGS will be the
#options I'll pass to the compiler
CFLAGS=-c -Wall -DPR_MACRO -DCARG

all:hello

hello:main.o hello.o
	$(CC) main.o hello.o -o hello

main.o:main.c hello.h
	$(CC) $(CFLAGS) main.c

hello.o:hello.c hello.h
	$(CC) $(CFLAGS) hello.c

clean:
	rm -rf *.o hello *.i *.s

preprocess_main:
	gcc -E $(CFLAGS)  main.c -o main.i

preprocess_hello:
	gcc -E $(CFLAGS)  hello.c -o hello.i

compile_main:
	gcc -S main.c

compile_hello:
	gcc -S hello.c

assemble_main:
	gcc -c main.c

assemble_hello:
	gcc -c hello.c


