#include "main.h"
/**
 *
 *
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char separator[13];

	separator[0]=' ';
	separator[1]='	';
	separator[2]='\n';
	separator[3]=',';
	separator[4]=';';
	separator[5]='.';
	separator[6]='!';
	separator[7]='?';
	separator[8]='"';
	separator[9]='(';
	separator[10]=')';
	separator[11]='{';
	separator[12]='}';

	for (i = 0; str[i] != '\0'; i++)
	{
		for(j = 0; j < 13; j++)
		{
			if (separator[j] == str[i] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[a - 32]
	}
	return (str);
}
