#include "main.h"
#include "3-strcmp.c"
/**
 * _strstr - locate a substring
 * @haystack: the string to look for
 * @needle: the string to search
 * Return: the located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (haystack[j] == needle[i])
		{
			i++;
			if (needle[i] == "")
			{
				return (&haystack[j]);
			}
			return (&haystack[j]);
		}
	}
	return (NULL);
}
