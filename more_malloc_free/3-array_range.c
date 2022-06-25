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
	int i = 0;
	int j = 0;

	if (min > max)
	{
		return(NULL);
	}
	j = max - min + 1;
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	for (; i <= j; i++)
	{
		arr[i] = min + i;
	}
	return(arr);
}
