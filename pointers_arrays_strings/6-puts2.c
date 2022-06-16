#include "main.h"
/**
 * puts2 - display in the screen every other character of a string
 * @str: is a address to a string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{	
		if ((i % 2) != 0)
		{
			i++;
		}
		_putchar(str[i]);
	}
	_putchar(10);
}
