#include "main.h"

/**
 * set_bit - this func will set a bit  to won
 * @n: ptr to num ch
 * @index: ind of num set 1
 * Return: the r will b 1 for succ, -1 for 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
