#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
	int i, n, d;

	for (n = 0; src[n] != '\0'; n++)
	{
	}
	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	for (d = 0; d < n; d++)
	{
		putchar(src[d]);
	}
	printf("\n");
	for (d = 0; d < n; d++)
		putchar(dest[d]);
	printf("\n");
	return (dest);
}
