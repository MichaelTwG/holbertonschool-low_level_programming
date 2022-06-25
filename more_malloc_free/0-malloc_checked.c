#include "main.h"
/**
 * malloc_checked - allocates b bytes using malloc
 * @b: amount of bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
