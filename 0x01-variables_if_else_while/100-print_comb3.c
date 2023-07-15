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
	int num, numm;

	for (numm = 0; numm < 9; numm++)
	for (num = numm + 1; num < 10; num++)
	{
		putchar('0' + num);
		putchar('0' + numm);
		if (numm != 8)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
