#include "main.h"
/**
 * _strcpy - copy the string src to string dest
 * @dest: destine string
 * @src: source string
 * Return: te porinter to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
		return (dest);
}
