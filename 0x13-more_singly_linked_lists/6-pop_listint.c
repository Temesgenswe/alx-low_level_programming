
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h" 

/**
*pop up
* pop 
**/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	data = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (data);
}
