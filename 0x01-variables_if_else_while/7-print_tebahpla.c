#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (success)
*/
int main(void)
{
	char xx;

	for (xx = 'z'; xx >= 'a'; xx--)
		putchar(xx);
	putchar('\n');
	return (0);
}
