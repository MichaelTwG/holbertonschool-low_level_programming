#include "main.h"
#include "_putchar.c"
#include "fizz_buzz.c"
#include "_putchar_number.c"
/**
 * main - print a number from 1 to 100.
 * Retrun: always 1.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100)
	{
		if ((i % 15) == 0)
		{
			fizz_buzz(3);
		}
		else if ((i % 5) == 0)
		{
			fizz_buzz(2);
		}
		else if ((i % 3) == 0)
		{
			fizz_buzz(1);
		}
		else
		{
			_putchar_number(i);
		}
		_putchar(' ');
	}
	return (0);
}
