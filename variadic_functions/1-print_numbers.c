#include "variadic_functions.h"
/**
 * print_numbers - display n numbers passed by parameter
 * @separator: seperator
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
	va_list argument;

	if (n == 0)
	{
		return (0);
	}
	va_start(argument, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(argument, int);
		printf("%d", value);
		if (separator != 0 && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argument);
}
