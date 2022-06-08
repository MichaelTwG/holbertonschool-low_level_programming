#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num0;
	int num1;
	int num2;
	int num3;
	int num4;

	for (num0 = 0; num0 <= 9; num0++)
	{
		for (num1 = 0; num1 <= 8; num1++)
		{
			for (num2 = 0; num2 <= 9; num2++)
			{
				for (num3 = 1; num3 <= 9; num3++)
				{
					putchar(num0 + '0');
					putchar(num1 + '0');
					putchar(' ');
					putchar(num2 + '0');
					putchar(num3 + '0');
					num4 = num0 + num1 + num2 + num3;
					if (num4 != 35)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
