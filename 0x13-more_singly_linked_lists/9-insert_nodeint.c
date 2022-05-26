#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node
 * @head: a pointer
 * @idx: list of index
 * @n: integer
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *h = *head;
	unsigned in i;

	new = malloc(sizeof(listint_t));
	if(new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = h;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idex - 1); i++)
	{
		if (h == NULL || h->next == NULL)
			return (NULL);

		h = h->next;

	}

	new->next = h->next;
	h->next = new;

	return (new);
}
