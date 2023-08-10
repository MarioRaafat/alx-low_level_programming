#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int a, b, i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	for (a = 0; *(s2 + a); i++)
	{
	}
	for (b = 0; *(s1 + b); i++)
	{
	}
	s3 = (char *) malloc(a + b - 1);
	for (i = 0; i < a; i++)
	{
		*(s3 + i) = *(s1 + i);
	}
	for (i = 0; i < b; b++)
	{
		*(s3 + a + i) = *(s2 + i);
	}
	*(s3 + a + b - 1) = '\0';
	if (s3 == 0)
		return (NULL);
	return (s3);
}
