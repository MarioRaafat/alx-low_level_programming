#include <stdio.h>
#include "main.h"
/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */
int factorial(int n)
{
	int i = n;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	if (n > 1)
		i *= factorial(n - 1);
	return (i);
}
