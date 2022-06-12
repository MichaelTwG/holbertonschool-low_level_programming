#include "main.h"
#include "_putchar.c"
/**
 * _putchar_number - display a number from 1 to 100
 *
 */

void _putchar_number(int n)
{
	if (n < 9)
	{
		_putchar(n + 48);
	}
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n == 100)
	{
		_putchar(49);
		_putchar(48);
		_putchar(48);
	}
}
