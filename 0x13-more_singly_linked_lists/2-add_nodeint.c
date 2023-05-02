#include "lists.h"

/**
 * add_nodeint - it will add a new node to the start linked lists
 * 
 * @head: it is the head of first node
 * @n: it is the int that will add list
 * Return: willl be NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *por;

	por = malloc(sizeof(listint_t));
	if (!por)
		return (NULL);

	por->n = n;
	por->next = *head;
	*head = por;

	return (por);
}
