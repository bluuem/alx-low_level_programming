#include "lists.h"

/**
 * pop_listint - this func will delete the HN and returns the HND
 * @head: pinr to two ele
 *
 * Return: it will be 0 or the dta will be beleted
 */
int pop_listint(listint_t **head)
{
	listint_t *tpr;
	int j;

	if (!head || !*head)
		return (0);

	j = (*head)->n;
	tpr = (*head)->next;
	free(*head);
	*head = tpr;

	return (j);
}
