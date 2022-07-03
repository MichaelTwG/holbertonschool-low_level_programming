#include "variadic_functions.h"
/**
 * print_char - print char format
 * @arg: the argument to print
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_int - print int format
 * @arg: the argument to print
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * print_string - pint string format
 * @arg: the argument to print
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (!str)
	{
		str  = "(nil)";
	}
	printf("%s", str);
}
/**
 * print_float - pint float format
 * @arg: the argument to print
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * print_all - pint all format
 * @format: the format to print
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char * s = "";
	va_list args;

	op_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'s', print_string},
		{'f', print_float},
		{0, NULL},
	};

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (ops[j].op != 0)
		{
			if (format[i] == ops[j].op)
			{
				printf("%s", s);
				ops[j].f(args);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
