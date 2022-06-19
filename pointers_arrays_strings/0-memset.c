#include "main.h"
/**
 * _memset - fill the string s with the char b, n times.
 * @s: the string to fill
 * @b: the character that fill
 * @n: the amount of spaces to fill.
 * Return: a pointer to te memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
