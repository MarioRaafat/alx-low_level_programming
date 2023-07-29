#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - concat 2 string
 * @m:char
 * Return:char
 */
char *string_toupper(char *m)
{
	int i;

	for (i = 0; *m[i] != '\0' && 96 < *m[i] < 123; i++)
	{
		*m[i] = putchar(*m[i] + 32)
	}
	return (m);
}
