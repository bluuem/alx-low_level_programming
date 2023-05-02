#include "lists.h"

/**
  * listint_len - will return the num of ele linked
  *
  * @h: this is just a head pointer
  *
  * Return: it is returning the num of ele
  */
size_t listint_len(const listint_t *h)
{
	size_t amou = 0;

	while (h != NULL)
	{
		amou++;
		h = h->next;
	}
	return (amou);
}

