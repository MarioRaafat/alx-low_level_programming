#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return count;
	while (h->prev != NULL)
		h = h->prev;
	for (;h;count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return count;
}
