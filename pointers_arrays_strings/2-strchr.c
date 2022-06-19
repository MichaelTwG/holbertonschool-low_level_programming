#include "main.h"
/**
 * _strchr - find a character in a string
 * @s: the string to search for
 * @c: the character to find
 * Return: s if s == c, or null if they don't match
 */
char *_strchr(char *s, char c)
{
	for (; *s ; s++)
	{
		if (*s++ == '\0')
		{
			return (s);
		}
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
