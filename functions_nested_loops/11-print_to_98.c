#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural number from n to 98
 * Retrun: void
 * @n: integer
 */
void print_to_98(int n)
{
	for (; n != 98;)
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
}
