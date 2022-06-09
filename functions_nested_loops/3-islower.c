#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 1 if c is lowercase. 0 otherwise
 * @c - charecter to check
 * @i - interation variable
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
