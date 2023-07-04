#include "lists.h"

/**
 * addnodeint_end adds a new node at the end of
 * the listint_t list. 
 * n is sthe data to add to the node
 * head is a pointer to the first element of the list
 * returns the address of the new element
 * returns NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head ==NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	
	temp->next = new;

	return (new);
}

