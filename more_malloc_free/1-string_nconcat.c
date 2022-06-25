#include "main.h"
/**
 * string_nconcat - concatenates two string using malloc
 * @str1: string
 * @str2: string
 * @n: number of bytes to add of s2 to s1
 * Return: pointer to a resulting string
 */
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	unsigned int sl1 = strlen(str1);
	unsigned int sl2 = strlen(str2);
	char *strT;
	unsigned int i, j;

	if (str2 == NULL)
	{
		str2 = "";
	}
	if (str1 == NULL)
	{
		str1 = "";
	}
	if (n > sl2)
	{
		n = sl2;
	}
	strT = malloc((sizeof(char) * (sl1 + n)) + 1);
	if (strT == NULL)
	{
		return (NULL);
	}
	for (i = 0; str1[i]; i++)
	{
		strT[i] = str1[i];
	}
	for (j = 0; j <= n; j++)
	{
		strT[i] = str2[j];
		i++;
	}
	return (strT);
}
