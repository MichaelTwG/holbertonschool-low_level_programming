#include "main.h"
/**
 * str_concat - conatenastes two string with malloc
 * @s1: is a string
 * @s2: is a string
 * Return: a porinter of te resulting string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int l1;
	int l2;
	char *st;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	l1 = strlen(s1);
	l2 = strlen(s2);
	st = malloc(sizeof(char) * (l1 + l2) + 1);
	for (i = 0; s1[i]; i++)
	{
		st[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		st[i] = s2[j];
		i++;
	}
	st[i] = '\0';
	return (st);
}
