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

			_putchar((i + 48) / 10);
			_putchar((i + 48) % 10);
			_putchar((j + 48) / 10);
			_putchar((j + 48) % 10);
		}
	}
}
