/**
 *
 *
 */
void puts2(char *str);
{
	int i = 0;

	for (; str[i]; i++)
	{
		if ((str[i] % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
}
