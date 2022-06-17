#include "main.h"
/**
 *
 *
 */
void reverse_array(int *a, int n)
{
	int cp_a[999];
	int i;
	int value;

	for (i = 0; i < n; i++)
	{
		cp_a[i] = a[i];
	}
	n--;
	for (i = 0; n >= 0; n--)
	{
		value = cp_a[n];
		a[i] = value;
		i++;
	}
}
