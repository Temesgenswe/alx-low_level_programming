#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head of the list
 * @index: of the node te remove
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *node;
	dlistint_t **ptr;

	if (!head || !*head)
		return (-1);

	ptr = head;

	while (idx < index && (*ptr)->next)
	{
		ptr = &((*ptr)->next);
		idx++;
	}
	if (idx < index)
		return (-1);

	if ((*ptr)->next)
		((*ptr)->next)->prev = (*ptr)->prev;
	node = *ptr;
	*ptr = (*ptr)->next;
	free(node);
	return (1);
}
