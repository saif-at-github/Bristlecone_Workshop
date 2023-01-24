#include <stdio.h>

void fun2()
{
	int k = 30;

	printf("fun2:: inside fun1()\n");

	while(1);
}
void fun1()
{
	int j = 20;
	printf("fun1:: inside fun1()\n");
	fun2();
}


int main()
{
	int i = 10;
	fun1();
	printf("Called fun1()\n");

	return 0;
}
