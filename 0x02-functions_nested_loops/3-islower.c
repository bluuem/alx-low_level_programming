#include "main.h"

/**
  * _islower - function to print lower case
  *
  * @c: parameter is to be printed
  *
  * Return: 1 if it is a lower case
  * and 0 otherwuse
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
