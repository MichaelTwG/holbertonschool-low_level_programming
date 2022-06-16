#include "main.h"
/**
 * puts_half - display the second half of a string
 * @str: is a string
 */
void puts_half(char *str)
{
	int lenght;
	int f_half;

	for (lenght = 0; str[lenght] != '\0'; lenght++)
	{
	}
	if ((lenght % 2) != 0)
	{
		lenght--;
	}
	for (f_half = lenght / 2; f_half < lenght; f_half++)
	{
		_putchar(str[f_half]);
	}
	_putchar(10);
}
