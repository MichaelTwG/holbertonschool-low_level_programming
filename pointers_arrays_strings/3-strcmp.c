#include "main.h"
/**
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		if (s1[i] < s2[i])
		{
			return (-1);
		}
	}
}
