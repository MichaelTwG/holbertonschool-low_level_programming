#include "main.h"
/**
 *
 *
 */
char *_strdup(char *str)
{
	int i, j;
	char *str2;

	for (i = 0; str[i]; i++)
	{

	}
	str2 = malloc(i * sizeof(char));
	
	for (j = 0; str2[j]; j++)
	{
		str2[j] = str[i];
	}
	return (str2);
}
