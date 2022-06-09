#include "main.h"
/**
 * print_last_digit - display the las number of an int
 * Return: num
 * @r: integer
 */
int print_last_digit(int r)
{
	int ld = r % 10;

	_putchar(ld + '0');
	return (ld);
}
