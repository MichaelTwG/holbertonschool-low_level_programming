#include "main.h"
/**
 * print_diagonal - display a diagonal linea of size n
 * Return: void
 * @n: number of times the character is repeated
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar(10);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar(92);
			}
			else if (i > j)
			{
				_putchar(' ');
			}
		}

		_putchar(10);
	}
}
