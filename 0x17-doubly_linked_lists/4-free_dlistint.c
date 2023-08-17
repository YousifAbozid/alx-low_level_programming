#include "lists.h"

/**
 * free_dlistint - free dlistint_t list
 * @head: first node
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
