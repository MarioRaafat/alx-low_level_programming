#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts2(char *str)
{
	int i = 0;

	int n;

	for (n = 0; *str++;)
		n++;
	while (str[i] != '\0' && i < n)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
