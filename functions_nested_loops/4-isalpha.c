#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 1 if c is lowercase. 0 otherwise
 * @c: charecter
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if ( c >= 'A' && c <= 'Z' )
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
