#include <stdio.h>
#include <stdlib.h>

unsigned int factorial(unsigned int n)
{
    if (n == 0)  
		return 1;
    return n * factorial(n-1);
}

#if 0
int main(int argc, char* argv[])
{
	unsigned int loop = 50;
	while(loop--) {
    printf("Factorial of number %d is %u\n", 
            loop, 
            factorial(loop));
	}
    
	return 0;
}
#endif

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Syntax: %s <num>\n", argv[0]);
        return -1;
    }
    
	unsigned int loop = atoi(argv[1]);
	while(loop--) {
    printf("Factorial of number %d is %u\n", 
            loop, 
            factorial(loop));
	}
    
	return 0;
}