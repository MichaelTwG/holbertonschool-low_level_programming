#include "main.h"
/**
 * _calloc - allocate memory of an array
 * @nmemb: amount of array
 * @size: size of the tipe of variable
 * Return: a memory adress
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (0);
	for (i = 0; i < (size * nmemb); i++)
		memory[i] = 0;
	return (memory);
}
