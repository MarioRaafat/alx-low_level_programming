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
	int num, numm, x, xx;

	for (x = 0; x < 10; x++)
	{
	for (xx = 0; xx < 10; xx++)
		{
	for (numm = x; numm < 10; numm++)
	{
		for (num = xx + 1; num < 10; num++)
		{
			putchar('0' + x);
			putchar('0' + xx);
			putchar(32);
			putchar('0' + numm);
			putchar('0' + num);
			if (x == 9 & xx == 9)
				break;
			if (x != 9 || xx != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
		}
	}
	putchar('\n');
	return (0);
}
