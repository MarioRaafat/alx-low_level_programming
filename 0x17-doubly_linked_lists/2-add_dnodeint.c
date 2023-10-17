#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	h = *head;
	while (h->prev)
		h = h->prev;
	if (!h)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = h;
	h->prev = new;
	*head = new;
	return (new);
}
