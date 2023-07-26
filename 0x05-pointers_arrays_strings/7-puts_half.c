#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int mid, n, fn, i;

	for (n = 0; str[n] != '\0'; n++)
	{
	}
	fn = n - 1;
	for (i = 0; i < n; i++, n--)
	{
	}
	for (mid = i; mid < n; mid++)
		_putchar(str[mid]);
	_putchar('\n');
}
