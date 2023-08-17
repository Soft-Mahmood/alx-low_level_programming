#include "lists.h"

/**
 * print_dlistint - prints all the elements of the list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
