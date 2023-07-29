#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * leet - concat 2 string
 * @m:char
 * Return:char
 */
char *leet(char *m)
{
	int i;

	for (i = 0; m[i] != '\0'; i++)
	{
		if (m[i] == 'a' || m[i] == 'A')
		{
			m[i] = '4';
		}
		if (m[i] == 'e' || m[i] == 'E')
		{
			m[i] = '3';
		}
		if (m[i] == 'o' || m[i] == 'O')
		{
			m[i] = '0';
		}
		if (m[i] == 'l' || m[i] == 'L')
		{
			m[i] = '1';
		}
		if (m[i] == 't' || m[i] == 'T')
		{
			m[i] = '7';
		}
	}
	return (m);
}
