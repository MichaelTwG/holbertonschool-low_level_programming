#include "main.h"
/**
 * rev_string -
 * @s:
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
	for (i = 0; 0 <= count; count--)
	{
		value = saux[count];
		s[i] = value;
		i++;
	}
}
