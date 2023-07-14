#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d is 0\n", n);
	else
		printf("Last digit of %d is less than 6 not 0\n", n);
	return (0);
}
