/**
 * _isupper - check if a char is upper or not
 * Return: 1 if c is upper and 0 if c not is an upper
 * @c: is a character
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
