#include "main.h"

/**
 * print_binary - this func will read the br of a num
 * @n: num to read
 */
void print_binary(unsigned long int n)
{
	int j, amo = 0;
	unsigned long int now;
	for (j = 63; j >= 0; j--)
	{
		now = n >> j;
		if (now & 1)
		{
			_putchar('1');
			amo++;
		}
		else if (amo)
			_putchar('0');
	}
	if (!amo)
		_putchar('0');
}
