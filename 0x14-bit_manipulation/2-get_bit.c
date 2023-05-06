#include "main.h"

/**
 * get_bit - this func reads the val b at an ind in dn
 * @n: nub 2 s
 * @index: ind bit
 * Return: it will returnval ofbit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bn;
	if (index > 63)
		return (-1);
	bn = (n >> index) & 1;
	return (bn);
}
