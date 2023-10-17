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
	unsigned int count, i;

	while (head->prev != NULL)
		head = head->prev;
	for (count = 0; head; count++)
		head = head->next;
	while (head->prev != NULL)
		head = head->prev;
	if (index > count)
		return (NULL);
	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
