#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * we are going to the main function
*/
int main(void) /*this is the start*/
{
	int n; /*declaration n*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%i is positive\n", n);
	else if (n < 0)
	printf("%i is negative\n", n);
	else
	printf("%d is zero\n", n);
	return (0);
}
