#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to the list
 * @n: value
 * Return: pointer to the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (new);
	}

	*head = new;
	new->next = NULL;
	return (new);
}
