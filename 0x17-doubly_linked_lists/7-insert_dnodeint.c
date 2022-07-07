#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to ddl
 * @idx: where the new node should be added
 * @n: value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr;
	unsigned int index;

	if (!h || (idx && *h == NULL))
		return (NULL);

	ptr = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (!idx)
	{
		new->prev = NULL;
		new->next = ptr;
		if (ptr)
			ptr->prev = new;
		*h = new;
		return (new);
	}

	for (index = 0; index < (idx - 1) && (ptr->next); index++)
		ptr = ptr->next;
	if (index < (idx - 1))
	{
		free(new);
		return (NULL);
	}

	new->prev = ptr;
	if (ptr->next)
		(ptr->next)->prev = new;
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
