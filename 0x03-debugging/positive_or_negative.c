#include "main.h"
/**
  * positive_or_negative - checks for positve or negative numbers
  *
  * @i: the numbe to be checked
  *
  * Return: always o
  */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is postive\n", i);
}
