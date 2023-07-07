#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	/* If the head pointer is NULL and the index is greater than 0, */
	/* it means the list is empty, and the desired index is invalid. */
	if (*head == NULL && idx > 0)
		return (NULL);

	/* If the index is 0, it means we need to insert the new node */
	/* at the beginning. */
	if (idx == 0)
	{
		/* Allocate memory for the new node. */
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		/* Set the value and link the new node to the current head. */
		new_node->n = n;
		new_node->next = *head;

		/* Update the head to point to the new node. */
		*head = new_node;

		/* Return the address of the new node. */
		return (new_node);
	}

	/* Recursively call the function on the next node, reducing the index by 1. */
	return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
}

