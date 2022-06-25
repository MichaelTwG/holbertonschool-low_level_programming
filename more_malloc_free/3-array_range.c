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
	int i = min;
	int j = 0;

	if (min > max)
	{
		return(NULL);
	}
	arr = malloc(sizeof(int) * (max - min) + 4);
	if (arr == NULL)
		return (NULL);
	for (; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return(arr);
}
