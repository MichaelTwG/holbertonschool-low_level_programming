#include "function_pointers.h"
/**
 * int_index - search for an string
 * @array: array
 * @size: size of the array
 * @cmp: function that compares a int
 * Return: 1 or -1 in fall
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			res = (*cmp)(array[i]);
			if (res == 1)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
