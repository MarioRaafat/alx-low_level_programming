#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int i = 0, sum;

	va_start(args, n);

	for (i = 0; i < sum; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(arg);

	return (sum);
}
