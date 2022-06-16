#include "main.h"
/**
 * _strcat - concatenates two string, from src to dest
 * @dest: is a destination string
 * @src: is a source string
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int lenght;
	int lenght2;
	int lenght_total;
	int i = 0;

	for (lenght = 0; dest[lenght] != '\0'; lenght++)
	{
	}
	for (lenght2 = 0; src[lenght2] != '\0'; lenght2++)
	{
	}
	lenght_total = lenght + lenght2;
	for (; lenght_total > lenght; lenght++)
	{
		dest[lenght] = src[i];
		i++;
	}
	return (dest);
}
