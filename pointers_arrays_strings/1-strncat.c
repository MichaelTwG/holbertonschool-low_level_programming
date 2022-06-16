#include "main.h"
/**
 * _strncat - concatenates n bytes of src to dest
 * @src: is a source
 * @dest: is the destiny
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int l_2;
	int i;

	for (l = 0; dest[l] != '\0'; l++)
	{
	}
	for (l_2 = 0; src[l_2] != '\0'; l_2++)
	{
	}
	for (i = 0; i < n && n <= l_2; i++)
	{
		dest[l] = src[i];
		l++;
	}
	return (dest);
}
