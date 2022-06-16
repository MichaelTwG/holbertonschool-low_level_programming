#include "main.h"
#include "2-strlen.c"
/**
 * _strncpy - copy the string dest, to the string src
 * @dest: the destiny string
 * @src: the source string
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l2 = _strlen(src);
	int i;

	for (i = 0; i < n && i <= l2; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
