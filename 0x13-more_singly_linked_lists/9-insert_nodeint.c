#include "lists.h"
/**
 * insert_nodeint_at_index - this func will enter a new node by wp
 * @head: ptr to frt node
 * @idx: node idx
 * @n: new node
 * Return: add new nd or n
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *kw;
	listint_t *tpr = *head;

	kw = malloc(sizeof(listint_t));
	if (!kw || !head)
		return (NULL);

	kw->n = n;
	kw->next = NULL;

	if (idx == 0)
	{
		kw->next = *head;
		*head = kw;
		return (kw);
	}

	for (j = 0; tpr && j < idx; j++)
	{
		if (j == idx - 1)
		{
			kw->next = tpr->next;
			tpr->next = kw;
			return (kw);
		}
		else
			tpr = tpr->next;
	}

	return (NULL);
}
