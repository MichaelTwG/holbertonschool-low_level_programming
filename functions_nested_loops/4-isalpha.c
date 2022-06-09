#include "main.h"
#include "3-islower.c"
/**
 * _islower - checks for lowercase character
 * Return: 1 if c is lowercase. 0 otherwise
 * @c: charecter
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		_islower(c);
	else
	{
		return (0);
	}
}
