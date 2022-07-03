#include "variadic_functions.h"
/**
 *
 *
 */
void print_int(int n, int pa, ...)
{
	int i = 0;
	va_list args;

	va_start(args, n);
	while(i)
	{
		if (i == pa)
		{
			printf("%d, ", va_arg(args, int));
			exit(0);
		}
	}
	va_end(args);
}
/**
 *
 *
 */
void print_char(int n, int pa, ...)
{
	int i = 0;
	va_list args;

	va_start(args, n);
	while(i)
	{
		if (i == pa)
		{
			printf("%s, ", va_arg(args, char));
			exit(0);
		}
	i++;
	}
	va_end(args);
}
/**
 *
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0, pa = 0, n = strlen(format);
	va_list args;

	op_t ops[] = {
		{"i", print_int},
		{"c", print_char},
		{NULL, NULL}
	};
	while (format[i])
	{
		while (ops[j].op != NULL)
		{
			if (format[j] == *(ops[j].op))
			{
				ops[j].f(n, pa, args);
			}
			else
			{
				pa--;
			}
			pa++;
			j++;
		}
		i++;
	}
	printf("\n");
}
