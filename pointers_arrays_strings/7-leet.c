#include "main.h"
/**
 * leet - write a function that encodes a string into 1337
 * @dest: is a string
 * Return: dest
 */
char *leet(char *dest)
{
	char str[] = "aeotl";
	char str2[] = "43071";
	int i;
	int j;

	for (i = 0; dest[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (dest[i] == str[j] || (dest[i] + 32) == str[j])
			{
				dest[i] = str2[j];
			}
		}
	}
	return (dest);
}
