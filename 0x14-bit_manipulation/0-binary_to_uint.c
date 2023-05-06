#include "main.h"

/**
 * binary_to_uint - this func will conver a bn to an ui
 * @b: str that contains a bn
 * Return: wil be the conver bn
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dn = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dn = 2 * dn + (b[j] - '0');
	}

	return (dn);
}
