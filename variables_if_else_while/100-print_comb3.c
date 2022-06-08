#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	int number_2;

	for (number = 0; number < 9; number++)
	{
		for (number_2 = number + 1; number_2 <= 9; number_2++)
		{
			putchar(number + '0');
			putchar(number_2 + '0');
			if (number != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar(10);
	return (0);
}
