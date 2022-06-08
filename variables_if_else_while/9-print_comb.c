#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
		putchar(44); /* coma "," */
		putchar(32); /* espacio en blanco " " */
	}
	putchar(10);
	return (0);
}
