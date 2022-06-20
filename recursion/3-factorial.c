#include "main.h"
/**
 * factorial - Return the factorial of a given number
 * @n: is a int
 * Return: return 1 if n is 0, return -1 if n is less than 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
