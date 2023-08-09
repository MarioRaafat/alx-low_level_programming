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

	while (*(str + i))
		i++;
	arr = (char *) malloc(i);
	for (d = 0; d <= i; d++)
		*(arr + d) = *(str + d);
	if (arr == 0)
		return (NULL);
	return (arr);

}
