#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destiny string
 * @src: source string
 * @n: number of bytes that copy from src to dest
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	for (i = 0;; i++)
	{
		for (j = 0; j <= n ; j++)
		{
			dest[i] = src[j];
			i++;
		}
		break;
	}
	return (dest);
}
