#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (success)
*/
void print_alphabet(int x, int z)
{
	int i;

	for (i = x; i < z; i++)
	_putchar(i);
	_putchar('\n');
	return (0);
}

int main(void)
{
	print_alphabet(97, 123);
	return(0);
}
