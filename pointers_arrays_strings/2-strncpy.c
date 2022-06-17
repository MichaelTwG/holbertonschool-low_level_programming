#include "main.h"
/**
 * _strncpy - copy the string dest, to the string src
 * @dest: the destiny string
 * @src: the source string
 * @n: copy n bytes of src to dest
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
