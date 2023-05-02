#include "lists.h"

/**
 * free_listint - this func will free a lis
 *
 * @head: this is the head of the list
 *
 * Return: it will be NULL if there is an error
 */
void free_listint(listint_t *head)
{
	listint_t *tpr;

	while (head != NULL)
	{
		tpr = head->next;
		free(head);
		head = tpr;
	}
}
