#include "main.h"
/**
 * array_range - 
 * @min -
 * @max -
 * Return:
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
	{
		return(NULL);
	}
	j = max - min + 1;
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		arr[i] = min + i;
	}
	return(arr);
}
