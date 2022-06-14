#include "main.h"
/**
 * _puts - display for stdout a string.
 * @s: is a pointer that point string to display
 */
void _puts(char *s)
{
	for (; *s != '\0';)
	{
		_putchar(*s);
		s++
	}
}
