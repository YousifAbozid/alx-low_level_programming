#include "lists.h"

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: first node in list
 * @n: index of to add
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
	}
	new_node->prev = h;
	if (h != NULL)
		h->next = new_node;

	*head = new_node;
	return (new_node);
}
