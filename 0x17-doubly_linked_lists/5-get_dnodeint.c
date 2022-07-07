#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head of the list
 * @index: index of the node to get
 * Return: the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (!head)
		return (NULL);

	while (idx < index && head)
	{
		head = head->next;
		idx++;
	}
	if (idx == index)
		return (head);
	return (NULL);
}
