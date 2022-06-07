#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* MY CODE */
	if (n == 0)
	{
		printf("%d is negative", n);
	}
	if (n > 0)
	{
		printf("%d is negative", n);
	}
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	return (0);
}
