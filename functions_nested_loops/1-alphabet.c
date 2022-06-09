#include "main.h"
/**
 * print_alphabet - display alphabet with a line scape
 * Return: void
 * @
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

