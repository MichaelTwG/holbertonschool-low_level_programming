/**
 * _isdigit - check if c is digit or not
 * Return: 1 if c is a digit and 0 in otherwise
 * @c: is a integer
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
