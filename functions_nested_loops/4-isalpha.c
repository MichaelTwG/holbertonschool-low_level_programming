#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 1 if c is lowercase. 0 otherwise
 * @c: charecter
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
		return (1);
	else
	{
		return (0);
	}
}
