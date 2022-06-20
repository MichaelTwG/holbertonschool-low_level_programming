#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: a 2D array
 * @size: the size of the 2D array
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum1 = sum1 + *a[j][j];
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			sum2 = sum2 + *a[i][j];
		}
	}
	printf("%d, %d", sum1, sum2);
}
