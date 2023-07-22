#include "main.h"
/**
 * print_alphapet - utilizeson the _putchar function to ptint the alphapet a - z
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch < 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
	return (0);
}
