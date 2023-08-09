#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *arr;
	int d, i = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		i++;
	if (i == 1)
		arr = (char *) malloc(i);
	else
		arr = (char *) malloc(i - 1);
	for (d = 0; d < i; d++)
		*(arr + d) = *(str + d);
	*(arr + d) = '\0';
	if (arr == 0)
		return (NULL);
	return (arr);

}
