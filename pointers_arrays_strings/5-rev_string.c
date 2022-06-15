#include "main.h"
/**
 * rev_string - get a addres of am string and rev the value
 * exaple, rev "Hola" to "aloH".
 * @s: is an memory addres of a string.
 */
void rev_string(char *s)
{
	int i;
	int count = 0;
	int value;
	int saux[999];

	while (s[count])
	{
		saux[count] = s[count];
		count++;
	}
	count--;
	for (i = 0; count >= 0; count--)
	{
		value = saux[count];
		s[i] = value;
		i++;
	}
}
