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

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == i)
			{
				_putchar(92);
			}
				_putchar(' ');
		}
		_putchar(10);
	}
}
