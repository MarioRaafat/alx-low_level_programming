#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	strcat(*dest, *src);
	return (*dest);
}
