#include "main.h"
/**
 * print_square - display a square of the character # of size n
 * Return: void
 * @n: size of the square
 */
void print_square(int n)
{
	int i;
	int j;

	if (n == 0 || n < 0)
	{
		_putchar(10);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
