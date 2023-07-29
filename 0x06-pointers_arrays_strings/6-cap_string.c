#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - concat 2 string
 * @m:char
 * Return:char
 */
char *cap_string(char *m)
{
	int i, j;

	char xx[] = " \t\n,;.!?\"(){}";

	for (j = 0; xx[j] != '\0'; j++)
	for (i = 1; m[i] != '\0'; i++)
	{
		if (m[i] >= 97 && m[i] <= 122 && m[i - 1] == xx[j])
		{
			m[i] = m[i] - 32;
		}
	}
	if (m[0] >= 97 && m[0] <= 122)
	m[0] = m[0] - 32;
	return (m);
}
