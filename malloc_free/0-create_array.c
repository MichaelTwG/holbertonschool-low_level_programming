#include "main.h"
/**
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (0);
	}
	str = malloc (size * sizeof(char));
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
