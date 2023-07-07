#include "lists.h"

/**
 * tmp_node - new memory
 * @list: old list
 * @size: size of new list
 * @new: new list
 *
 * Return: newlist
 */
const listint_t **tmp_node(const listint_t **list, size_t size,
		const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));

	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];

	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a linked list with loop detection
 * @head: head of a list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, j = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < j; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (j);
			}
		}
		j++;
		list = tmp_node(list, j, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (j);
}
