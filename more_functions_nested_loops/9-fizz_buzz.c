#include "main.h"
/**
 *
 *
 *
 */
void fizz_buzz (int n)
{
	if (n == 3)
	{
		printf("FizzBuzz");
	}
	if (n == 2)
	{
		printf("Fizz");
	}
	if (n == 1)
	{
		printf("Buzz");
	}
}
/**
 * main - print a number from 1 to 100.
 * Retrun: always 1.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			fizz_buzz(3);
		}
		else if ((i % 5) == 0)
		{
			fizz_buzz(2);
		}
		else if ((i % 3) == 0)
		{
			fizz_buzz(1);
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	return (0);
}
