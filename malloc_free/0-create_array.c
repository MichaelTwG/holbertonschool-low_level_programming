#include "main.h"
/**
 * create_array - create an array using malloc
 * @size: the size of the array
 * @c: a char which fill the array of char
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (0);
	}
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
}
