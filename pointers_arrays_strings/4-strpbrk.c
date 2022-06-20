#include "main.h"
/**
 * _strpbrk - searches in a string for any set of bytes
 * @s: string to search in
 * @accept: set of charaters to find
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s ; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
