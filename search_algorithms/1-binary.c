#include "search_algos.h"

/**
 * print_array - prints he array
 * @array: the array to print
 * @b: beggining
 * @e: end
 */
void print_array(int *array, int b, int e)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = b; i < e; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}
/**
 * binary_search - binary search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: int
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	int b = 0, end = (int)size - 1, half = 0;

	if (!array)
		return (-1);
	while (b <= end)
	{
		print_array(array, b, end);
		half = (b + end) / 2;
		if (array[half] == value)
			return (half);
		if (value < array[half])
			end = half - 1;
		else if (value > array[half])
			b = half + 1;
	}
	if (array[half] == value)
		return (half);
	return (-1);
}
