#include "lists.h"

/**
 * free_listint2 - tis func will free a list
 * @head: the two pointers of lists
 *
 * Return: it will be void
 */
void free_listint2(listint_t **head)
{
	listint_t *tpr;
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tpr = (*head)->next;
		free(*head);
		*head = tpr;
	}
}
