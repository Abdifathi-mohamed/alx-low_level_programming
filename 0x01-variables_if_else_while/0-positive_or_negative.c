#include <stdio.h>
#include <stdlb.h>
#include <time.h>

/**
 * main - prints if the number is + - or 0
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>2)
	{
		printf("%d is +\n", n);
	}
	else if (n==0)
	{
		printf("%d is zero\n", n);
	}
	else if (n<0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
	

