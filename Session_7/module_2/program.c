#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *buf;

	//buf = malloc(1 << 32);
    buf = NULL;

    /*
    // defensive coding
    if(buf != NULL)
    {
        fgets(buf, 1024, stdin);
        printf("%s\n", buf);
    }
    else
    {
        perror("MALLOC");
    }
    */

	fgets(buf, 1024, stdin);
	printf("%s\n", buf);

	return 1;
}