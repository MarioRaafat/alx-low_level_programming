#include "lists.h"
/**
 * print_listint - print
 * @h: pointer
 *
 * Return: number of elements
 * BY MARIO
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
