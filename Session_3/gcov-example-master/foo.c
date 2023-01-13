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
#if 0
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

	return 0;
	//else
		//return (i * j);
}
#endif

int myfunc(int i, int j)
{
	int out = 0;
	if (i < 0)
		out = -1;
	else if (j < 0)
		out =  -2;
	else if ((i == 0) && (j == 0))
		out =  0;
	else if(i > j)
		out = i - j;
	else if(j > i)
		out = j - i;
	else
		out = i + j;

	return out;
}