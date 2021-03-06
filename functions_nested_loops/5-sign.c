#include "main.h"
/**
 * print_sign - print if a number is less than 0 or greater than 0
 * Return: 1 if n is greater than 0. 0 if n is 0 and -1 if n is less than 0
 * @n: is a integer
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
