#include "main.h"
/**
 * f_aux - is an auxiliar function
 * @ndn: is n divided n
 * Return: 1 if ndn is equal to 1, and 0 for otherwise 
 */
int f_aux(int n, int n2)
{
	if (n < 2)
	{
		return (0);
	}
	else if ((n % n2) == 0 && (n % 1) == 0)
	{
		return (1);
	}
}
/**
 * is_prime_number - check if n is prime or not
 * @n: is a number
 * Return: 1 if n is prime and 0 in otherwise
 */
int is_prime_number(int n)
{
	return (f_aux(n, 2));
}
