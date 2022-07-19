#include "main.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: the number
 * @index: the index
 * Return: a bit 1 or 0. or -1 if an error ocured
 */
int get_bit(unsigned long int n, unsigned long int index)
{
	if (index > 32)
		return (-1);
	return (((n >> index) % 2));
}
