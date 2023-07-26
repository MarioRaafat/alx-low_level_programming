#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int mid, n, d, i;

	for (n = 0; str[n] != '\0'; n++)
	{
	}
	d = n;
	for (i = 0; i < n; i++, n--)
	{
	}
	for (mid = i; mid < d; mid++)
		_putchar(str[mid]);
	_putchar('\n');
}
