#include "main.h"
/**
 * flip_bits - return the number of bits you would need to flip
 * to get from one number to another
 * @n: number
 * @m: number2
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = (n ^ m);

	while (xor > 0)
	{
		count++;
		xor &= (xor - 1);
	}
	return (count);
}
