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
	int i;

	if (min > max)
	{
		return(NULL);
	}
	arr = malloc(sizeof(int) * max);
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; min++)
	{
		arr[i] = min;
		i++;
	}
	return(arr);
}
