#include "lists.h"

/**
 * get_nodeint_at_index - this func will print the nth node
 * @head: its the ptr of the first node
 * @index: the nodes index
 *
 * Return: the ptr of the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t;
	if (head == NULL)
		return (NULL);
	for (t = 0; t < index; t++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
