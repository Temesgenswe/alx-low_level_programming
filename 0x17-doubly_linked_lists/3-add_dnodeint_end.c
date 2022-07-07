#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to the list
 * @n: value
 * Return: pointer to the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new;
		new->prev = node;
		return (new);
	}

	*head = new;
	new->prev = NULL;
	return (new);
}
