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
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
		if (num <9)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
