#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, m, sum = 0, check;

	for (check = 1; check < argc; check++)
	{
		m = atoi(argv[check]);
		if (!(m > '0' && m <= '9'))
		{
			puts("Error");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		m = atoi(argv[i]);
		sum += m;
		if (i == argc - 1)
			printf("%d\n", sum);
	}
	return (0);
}
