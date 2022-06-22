#include "main.h"
/**
 * s_y - check if y is the square root of n
 * @y: is a number which 1 is added on each call of the function
 * @n: the radicand number of the square root
 * Return: it returns to itself pasing as parameter y + 1.
 */
int s_y(int y, int n)
{
	if ((y * y) > n)
	{
		return (-1);
	}
	else if ((y * y == n))
	{
		return (y);
	}
	else
	{
		return (s_y(y + 1, n));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is the number whose square root is to be found
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0 && (n % 2) != 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (s_y(0, n));
	}
}
