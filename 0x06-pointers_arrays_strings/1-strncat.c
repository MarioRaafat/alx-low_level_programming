#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concat 2 string
 * @dest:char
 * @src:char
 * @n:int
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
