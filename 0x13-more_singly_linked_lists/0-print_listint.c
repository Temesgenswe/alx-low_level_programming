#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		cont++;
		node = node->next;
	}

	return (cont);
}
