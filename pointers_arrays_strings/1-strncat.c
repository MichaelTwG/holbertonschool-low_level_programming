#include "main.h"
/**
 * _strncat - concatenates n bytes of src to dest
 * @src: is a source
 * @dest: is the destiny
 * @n: number of bytes to display
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int l_2;
	int i;
	int l_total;

	for (l = 0; dest[l] != '\0'; l++)
	{
	}
	for (l_2 = 0; src[l_2] != '\0'; l_2++)
	{
	}
	l_total = l + l_2;
	for (i = 0; i < n && l < l_total; i++)
	{
		dest[l] = src[i];
		l++;
	}
	return (dest);
}
