#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int m, mm;

	if (argc == 3)
	{
		m = atoi(argv[1]);
		mm = atoi(argv[2]);
		printf("%d\n", m * mm);
	}
	else
		puts("Error");
	return (0);
}
