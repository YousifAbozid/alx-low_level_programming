#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list with loop detection
 * @h: pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t list_size = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		list_size++;
		if (current < current->next)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		else
		{
			free(current);
			break;
		}
	}

	*h = NULL; /* Set the head to NULL */
	return (list_size);
}
