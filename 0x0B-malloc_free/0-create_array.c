#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *arr;

	arr = (char *) malloc(size * 4);
	int i;

	for (i = 0; i < size; i++)
	{
		*(arr + i) = putchar(c);
	}
	return (arr);
}
