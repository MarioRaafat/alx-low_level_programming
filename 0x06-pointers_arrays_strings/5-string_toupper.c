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

	for (i = 0; m[i] != '\0'; i++)
	{
		if (m[i] >= 97 && m[i] <= 122)
		{
			m[i] = m[i] - 32;
		}
	}
	return (m);
}
