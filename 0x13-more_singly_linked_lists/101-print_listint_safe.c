#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes
 * @head: a pointer to the head of the list
 * Return: always 0
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t i = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				i++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				i++;
				t = t->next;
			}
			return (i);
		}
		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a list
 * @head: apointer to the head of the list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, index = 0;

	i = loooped_listint_len(head);

	if (i == 0)
	{
		for (; head != NULL; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < i; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (i);
}
