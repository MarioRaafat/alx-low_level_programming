#include "lists.h"
/**
 * add_nodeint - adding nodes
 * @head: pointer
 * @n: the number
 *
 * Return: a list
 * BY MARIO
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
