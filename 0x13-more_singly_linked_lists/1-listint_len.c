#include "lists.h"

/**
 * this function returns the number of items in a 
 * linked list h
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
