#include <stdio.h>

/**
  * main - finction
  *
  * Return: always
  */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
