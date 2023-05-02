#include "lists.h"

/**
 * print_listint - will read  all the ele of a linked list
 * @h: it is linked list of listint_t that will print
 *
 * Return: it will return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
