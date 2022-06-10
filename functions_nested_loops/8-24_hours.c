#include "main.h"
/**
 *
 *
 */
void jack_bauer(void)
{
	int i=0 ;
	int j=0 ;

	for (; i <= 23; i++)
	{
		for (; j <= 59; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(10);
		}
		j = 0;
	}
}
