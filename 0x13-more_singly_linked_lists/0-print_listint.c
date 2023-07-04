#include "lists.h"

/**
 * this function prints the elements of 
 * a listint_t list
 * returns the number of nodes
 * number will be called nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{ 
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
