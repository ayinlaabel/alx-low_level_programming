#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * @head: head of a list
 * @n: number of element
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listin_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
