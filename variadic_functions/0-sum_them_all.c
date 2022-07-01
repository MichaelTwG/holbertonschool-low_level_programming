#include "variadic_functions.h"
/**
 * sum_them_all - return the addition of all its parameters
 * @n: the number of parameters
 * Return: res
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int value, res = 0;
	va_list argument;

	if (n == 0)
	{
		return (0);
	}
	va_start(argument, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(argument, int);
		res += value;
	}
	va_end(argument);
	return (res);
}
