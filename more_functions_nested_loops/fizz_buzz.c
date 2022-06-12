#include "main.h"
#include "_putchar.c"
/**
 * fizz_buzz - display fizz if n is 1
 * display buzz if n is 2
 * display fizzbuzz if n is  3
 * Return: void
 * @n: integer from 1 to 3
 */

void fizz_buzz (int n)
{
	char F[5] = "Fizz";
	char B[5] = "Buzz";
	int i;

	if (n == 3)
	{
		for (i = 0; i < 5; i++)
			_putchar(F[i]);
		for (i + 0; i < 5; i++)
			_putchar(B[i]);
	}
	else if (n == 2)
	{
		for (i = 0; i < 5; i++)
			_putchar(B[i]);
	}
	else if (n == 1)
	{
		for (i = 0; i < 5; i++)
			_putchar(F[i]);
	}
}
