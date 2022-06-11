#include "main.h"
/**
 * 
 */
int main(void)
{
	int i = 1;
	int j;
	int num;
	char F[5] = "Fizz";
	char B[5] = "Buzz";

	for (; i <= 100; i++)
	{
		num = i;

		if ((num % 15) == 0)
		{
			for (j = 0; j < 5; j++)
			{
				_putchar(F[j]);
			}
			for (j = 0; j < 5; j++)
			{
				_putchar(B[j]);
			}
		}
		else if ((num % 3) == 0)
		{
			for (j = 0; j < 5; j++)
			{
				_putchar(F[j]);
			}
		}
		else if ((num % 5) == 0)
		{
			for (j = 0; j <5; j++)
			{
				_putchar(B[j]);
			}
		}
		else
		{
			if (i >= 10 && i <= 99)
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			else if (i == 100)
			{
				_putchar(49);
				_putchar(48);
				_putchar(48);
			}
			else 
			{
				_putchar(i + 48);
			}
		}
		_putchar(' ');
	}
	return (0);
}
