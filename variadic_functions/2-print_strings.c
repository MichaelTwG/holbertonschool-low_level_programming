#include "variadic_functions.h"
/**
 * print_strings - display n numbers passed by parameter
 * @separator: seperator
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *value;
	va_list argument;

	va_start(argument, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(argument, char *);
		if (value == 0)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", value);
		}
		if (separator != 0 && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argument);
}
