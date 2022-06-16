#include "main.h"
/**
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l1 = _strlen(dest);
	int l2 = _strlen(src);
	int i;

	for (i = 0; i < n && i <= l2; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
