#ifndef HELLO_H

/* header file guard */
#define HELLO_H

/* include header files */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/* function declarations */
extern void Hello(const char* str);

/* macro definitions */
#define MUL(x,y)  ((x)*(y))

#define SQR(x)      ((x)*(x))

static int j = 100;

#if 0
void fun()
{
    printf("Testing...\n");
    return;
}

static void fun()
{
    printf("Testing...\n");
    return;
}


#endif


inline void fun()
{
    printf("Testing...\n");
    return;
}


#endif
