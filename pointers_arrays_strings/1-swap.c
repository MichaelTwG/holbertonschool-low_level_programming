/**
 * swap_int - swich the values of two variables
 * @a:point to a variable in main called a
 * @b:point to a variable in main called b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
