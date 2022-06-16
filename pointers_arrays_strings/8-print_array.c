#include "main.h"
/**
 * print_array - display n element of an array separated with " ,"
 * @a: point to an array
 * @n: number of element to display
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
