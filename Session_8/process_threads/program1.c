#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 1;

	while (i < 60) {
		i++;
		sleep(1);
	}

	return 0;
}
