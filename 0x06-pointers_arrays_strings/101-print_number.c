#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
	unsigned int xx = n;
	if (n < 0)
		putchar('-');
	if (xx < 10)
		for (i = 1; i < 2; i++)
			putchar(xx % (10 ^ i) + '0');
	 if (xx < 100)
		for (i = 1; i < 3; i++)
			putchar(xx % (10 ^ i) + '0');
	 if (xx < 1000)
		for (i = 1; i < 4; i++)
			putchar(xx % (10 ^ i) + '0');
	 if (xx < 10000)
		for (i = 1; i < 5; i++)
			putchar(xx % (10 ^ i) + '0');
}
