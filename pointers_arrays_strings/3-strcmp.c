#include "main.h"
/**
 * _strcmp - compare string s1 with string s2
 * @s1: is a string
 * @s2: is a string
 * Return: 0 if s1 and s2 is equial
 * a value greather than 0 if s1 is greather than s2
 * a value less than 0 if s2 is greather than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
}
