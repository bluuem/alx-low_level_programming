#include "lists.h"

/**
 * add_nodeint_end - this func will add a new node at the end
 *
 * @head: it is the head of the two pointers
 * @n: will add to the list
 * Return: it will be NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *npr;
	listint_t *tpr;

	if (head == NULL)
		return (NULL);
	npr = malloc(sizeof(listint_t));
	if (npr == NULL)
		return (NULL);
	npr->n = n;
	npr->next = NULL;

	if(*head == NULL)
	{
		*head = npr;
		return (npr);
	}
	tpr = *head;
	while (tpr->next != NULL)
	{
		tpr = tpr->next;
	}
	tpr->next = npr;
	return (npr);
}
