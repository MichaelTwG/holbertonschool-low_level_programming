#include "main.h"
/**
 * print_triangle - display a diagonal linea of size n
 * Return: void
 * @n: size of the triangle
 *
 */
void print_triangle(int n)
{
	int i;
	int j;
	int k = n - 1;

	if (n <= 0)
		_putchar(10);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j < k)
				_putchar(' ');
			else
				_putchar('#');
		}
		k--;
		_putchar(10);
	}
}
