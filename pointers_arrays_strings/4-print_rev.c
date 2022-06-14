#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: point to a string
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	i--;
	for (; i >= 0; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar(10);
}
