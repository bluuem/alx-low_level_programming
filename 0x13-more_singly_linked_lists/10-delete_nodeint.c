#include "lists.h"
/**
 * delete_nodeint_at_index - this func will del n at idx
 * @head: ptr two
 * @index: idex of n
 * Return: 1 suc -1 f
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tpr = *head;
	listint_t *n = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tpr);
		return (1);
	}
	while (j < index - 1)
	{
		if (!tpr || !(tpr->next))
			return (-1);
		tpr = tpr->next;
		j++;
	}
	n = tpr->next;
	tpr->next = n->next;
	free(n);
	return (1);
}
