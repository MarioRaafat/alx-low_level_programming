#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *mm;
	unsigned int len = 0;

		len = strlen(str);

	mm = malloc(sizeof(list_t));
	if (!mm)
		return (NULL);

	mm->str = strdup(str);
	mm->len = len;
	mm->next = *head;
	(*head) = mm;

	return (*head);
}
