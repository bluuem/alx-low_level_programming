#include "lists.h"
/**
 * sum_listint - this func prints he sum of n
 * @head: first node ptr
 * Return: sun of n
 */
int sum_listint(listint_t *head)
{
	int amou = 0;
	while (head != NULL)
	{
		amou += head->n;
		head = head->next;
	}
	return (amou);
}
