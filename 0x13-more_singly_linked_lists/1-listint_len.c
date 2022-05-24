#include "lists.h"

/**
 *This is length
 *
 *return number of node
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}

	return (cont);
}
