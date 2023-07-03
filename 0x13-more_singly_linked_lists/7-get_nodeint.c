#include "lists.h"

/**
 * get nodeint_at index gets the node at a given index
 * head is the first node in the list
 * index is the index of the node to return
 *
 * returns the pointer to the node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

