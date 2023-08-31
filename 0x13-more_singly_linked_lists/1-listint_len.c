#include "lists.h"
/**
 * listint_len - print
 * @h: pointer
 *
 * Return: number of elements
 * BY MARIO
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
