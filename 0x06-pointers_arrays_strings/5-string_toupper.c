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

	char ch;

	for (i = 0; m[i] != '\0'; i++)
	{
		if ('a' <= m[i] <= 'z')
		{
			ch = m[i];
			m[i] = putchar(ch - 32);
		}
	}
	return (m);
}
