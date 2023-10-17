#include "lists.h"
/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h;
	dlistint_t *k;
	int count;

	h = head;
	while (h->prev != NULL)
		h = h->prev;
	for (count = 0; h; count++)
		h = h->next;
	while (h->prev != NULL)
		h = h->prev;
	if (index > count)
		return (NULL);
	for (int i = 0; i < index; i++)
		h = h->next;
	k = h;
	return (k);
}
