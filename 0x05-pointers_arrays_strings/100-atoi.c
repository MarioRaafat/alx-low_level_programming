#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int i, n, a, b = 0, c = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == '-')
			i++;
	}
	if (i % 2 == 1)
		putchar(45);
	for (a = 0; a < n; a++)
	{
		if (s[a] < 58 && s[a] > 47)
			c++;
	}
	char xx[c];

	for (a = 0; a < n; a++)
	{
		if (s[a] < 58 && s[a] > 47)
		{
			xx[b] = s[a];
			b++;
		}
	}
	return (*xx);
}
