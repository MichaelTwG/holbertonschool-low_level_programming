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
	/* ld is the last digit of n*/
	if (ld > 5)
	{
		printf("is %d and is greater than 5\n", ld);
	}
	if (ld < 6 && ld != 0)
	{
		printf("is %d\n and is less than 6 and not 0", ld);
	}
	if (ld == 0)
	{
		printf("is %d and is 0\n", ld);
	}
	return (0);
}
