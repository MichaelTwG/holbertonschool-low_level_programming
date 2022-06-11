#include "main.h"
/**
 * print_line - display the character "_" n times
 * @n: number or times to display the character
 */
void print_line(int n)
{
	if (n < 0)
	{
		n = 0;
	}
	while (n--)
	{
		_putchar(95);
	}
	_putchar(10);
}
