#include "main.h"
#include <stdio.h>
/**
 *
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i >= n; i++)
	{
		if (i != n)
		{
			prinf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i])'
		}
	}
	_putchar(10);
}
