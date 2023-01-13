#include <stdio.h>

void foo(int num) {
  if (num == 1) {
    printf("when num is equal to 1...\n");
  } else if (num == 2) {
    printf("when num is equal to 2...\n");
  } else {
    printf("when num is equal to %d...\n", num);
  }
}

int myfunc(int i, int j)
{
	if (i < 0)
		return -1;
	else if (j < 0)
		return -2;
	else if ((i == 0) && (j == 0))
		return 0;
	else if(i > j)
		return  (i - j);
	else if(j > i)
		return (j - i);
	else if (i == j)
		return (i + j);
	else
		return (i * j);
}
