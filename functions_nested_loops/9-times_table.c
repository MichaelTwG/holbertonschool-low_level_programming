#include "main.h"
/**
 *
 *
 */
void times_table()
{
	int i = 0;
	int j = 0;
	int k;

	for(; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k > 9)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
		}
		_putchar(10);
	}
}
