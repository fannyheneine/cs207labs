#include <stdio.h>
#include <stdlib.h>

// prototype
int fib(int n);

int main(int argc, char **argv)
{
	printf("%d\n", fib(8));
}

int fib(int n)
{
	if (n == 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		return fib(n-1) + fib(n-2);
	}
}