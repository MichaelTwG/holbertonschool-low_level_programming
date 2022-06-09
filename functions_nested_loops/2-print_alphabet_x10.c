#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - display alphabet for 10 times
 * Return: void
 * @veces - is a number of times you can repeat the print_alphabet function
 */
void print_alphabet_x10(int veces)
{
	while (veces > 0)
	{
		print_alphabet();
		veces--;
	}
}

