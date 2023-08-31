#include "lists.h"
/**
 * free_listint - free
 *
 * BY MARIO
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head)
	{
		fr = head->next;
		free(head);
		head = fr;
	}
}
