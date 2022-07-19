#include "main.h"
/**
 * raise - power a number x
 * @x: base
 * @y: exponent
 * Return: unsigned int number
 */
unsigned int raise(unsigned int x, unsigned int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	y--;
	return (x * raise(x, y));
}
/**
 * binary_to_uint - converts a binary number to uint
 * @b: binary
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = (strlen(b) - 1), j = 0;

	if (!b)
	{
		return (0);
	}
		for (; b[j]; i--, j++)
		{
			if (b[j] != '1' && b[j] != '0')
			{
				return (0);
			}
			if (b[j] == '1')
			{
				result += raise(2, i);
			}
		}
	return (result);
}
