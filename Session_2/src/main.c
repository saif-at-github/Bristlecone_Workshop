/**
 * Author:    Shaik Saifulla (SAIF)
 * Created:   10.01.2013
 * 
 * (c) Copyright by Shaik Saifulla.
 **/

#include "hello.h"

int32_t main(int32_t argc, char* argv[])
{
    #ifdef CARG
    int32_t num = 0;
    #endif

    Hello("Bristlecone");
    
    #ifdef PR_MACRO
    printf("MUL(2+3,4+5) = %d\n", MUL(2+3,4+5));
    printf("SQR(10) = %d\n", SQR(10));
    #endif
    
    #ifdef CARG
    if(argc < 2) {
        printf("SYNTAX: %s num1 num2 \n", argv[0]);
        return -1;
    }

    num = atoi(argv[1]);
    printf("SQR(%d) = %d\n", num, SQR(num));

    #endif

    return 0;
}