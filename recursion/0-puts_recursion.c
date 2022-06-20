#include "main.h"
/**
 * _puts_recursion - print a string with recursion
 * @s: the string to display
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
