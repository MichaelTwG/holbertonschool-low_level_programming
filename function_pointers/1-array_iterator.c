#include "function_pointers.h"
/**
 * array_interator - array iterator
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	(void)(size);

	if (array && action)
	{
		for(i == 0; array[i]; i++)
		{
			(*action)(array[i])
		}
	}
}
