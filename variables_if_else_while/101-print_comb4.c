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
	int number_3;

	for (number = 0; number < 8; number++)
	{
		for (number_2 = number + 1; number_2 < 9; number_2++)
		{
			for (number_3 = number_2 + 1; number_3 <= 9; number_3++)
			{
				putchar(number + '0');
				putchar(number_2 + '0');
				if (number != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar(10);
	return (0);
}
