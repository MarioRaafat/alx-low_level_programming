#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	int i, num;

	va_list mm;

	va_start(mm, n);

	if (!separator)
	for (i = 0; i < n; i++)
	{
		num = va_arg(mm, int);
		if (i < n - 1)
			printf("%d%c ", num, separator);
		else
			printf("%d", num);
	}
	else
	for (i = 0; i < n; i++)
	{
		num = va_arg(mm, int);
		if (i < n - 1)
			printf("%d ", num);
		else
			printf("%d", num);
	}
	va_end(mm);

	printf("\n");
}
