#include <stdio.h>
#include <stdlib.h>

int sum(int n);

int main()
{
	printf("sum=%d", sum(10));
	return 0;
}

int sum(int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return sum(n-1) + n;
	}
}

