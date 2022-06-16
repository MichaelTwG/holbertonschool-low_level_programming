#include "main.h"
/**
 *
 *
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
