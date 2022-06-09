#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - display the las number of an int
 * Return: num
 * @r: integer
 */
int print_last_digit(int r)
{
	int ld;
	
	if (r != 0)
	{
		r = _abs(r);
		ld = r % 10;
		_putchar(ld + '0');
		return (ld);
	}
	_putchar(48);
	return (0);
}
