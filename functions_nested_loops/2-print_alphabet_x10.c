#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - display alphabet for 10 times
 * Return: void
 * @i - is a number of times you can repeat the print_alphabet function
 */
void print_alphabet_x10()
{
	int i = 0;
	while (i <= 10)
	{
		print_alphabet();
		i++;
	}
}

