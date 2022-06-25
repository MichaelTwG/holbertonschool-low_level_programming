#include "main.h"
/**
 * array_range - create an array of integers
 * @min: is the min number of the array
 * @max: is the max number of the array
 * Return: a pointer to the new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
