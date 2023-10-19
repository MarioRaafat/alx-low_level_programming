#include "lists.h"
/**
 * insert_dnodeint_at_index - adding a node at a specific index
 *
 * @h: list of node
 * @idx: the specific index
 * @n: the number that will be in the added node
 * Return: the adress of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new;
	dlistint_t *head;

	head = *h;
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	while (head->prev != NULL)
		head = head->prev;
	new->n = n;
	if (idx < count)
		for (unsigned int i = 0; i <= idx; i++)
		{
			if (i == idx)
			{
				new->prev = head->prev;
				new->next = head;
				head->prev = new;
			}
			head = head->next;
		}
	else
		return (NULL);
	return (new);
}
