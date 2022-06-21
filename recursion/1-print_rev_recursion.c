#include "main.h"
/**
 *  _print_rev_recursion - print a string in reverese with recursion
 * @s: the string to display
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion((s + 1));
		_putchar(*s);
	}
}