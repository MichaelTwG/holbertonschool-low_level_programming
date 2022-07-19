#include "main.h"
/**
 * set_bit - sits the value of a bit to 1 at a given index
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: the number
 * Return: 1 if it worked, or -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int aux = 1;

	if (index >= 32)
		return (-1);
	aux <<= index;
	(*n) += aux;
	return (1);
}
