#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - display the las number of an int
 * Return: num
 * @r: integer
 */
int print_last_digit(int r)
{
	r = r % 10;

	_abs(r);
	_putchar(r + 48);
	return (r);
}
