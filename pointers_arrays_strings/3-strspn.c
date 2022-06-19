#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: sring containing the characters to match.
 * Return: Number of character in s which consist only
 * of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
		if (s[i] == ' ')
		{
			return (count);
		}
	}
	return (count);
}
