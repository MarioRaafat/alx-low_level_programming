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

	for (nummm = 0; nummm < 8; numm++)
	for (numm = nummm + 1; numm < 9; numm++)
	for (num = numm + 1; num < 10; num++)
	{
		putchar('0' + nummm);
		putchar('0' + numm);
		putchar('0' + num);
		if (nummm != 7)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
