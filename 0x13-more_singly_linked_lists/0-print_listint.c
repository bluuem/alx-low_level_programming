#include "lists.h"

#include <stdio.h>

/**
 * print_listint - this func will print all the ele of a listsint_t list
 *
 * @h: it is the head of the link lists nodes
 *
 * Return: it returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t amou = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		amou++;
	}
	return (amou);
}
