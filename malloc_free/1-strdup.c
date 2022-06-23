#include "main.h"
/**
 *
 *
 */
char *_strdup(char *str)
{
	int i, j;
	char *str2;
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{

	}
	str2 = malloc(i * sizeof(char) + 1);
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		str2[j] = str[j];
	}
	return (str2);
}
