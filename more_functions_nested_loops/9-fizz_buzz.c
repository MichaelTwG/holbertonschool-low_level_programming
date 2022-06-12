#include "main.h"
/**
 * fizz_buzz - display fizz - buzz or fizzbuzz
 * Return: void
 * @n: is a number from 1 to 3
 */
void fizz_buzz(int n)
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
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			fizz_buzz(3);
			printf(" ");
		}
		else if ((i % 5) == 0)
		{
			fizz_buzz(2);
			printf(" ");
		}
		else if ((i % 3) == 0)
		{
			fizz_buzz(1);
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
