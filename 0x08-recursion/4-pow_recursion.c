#include "main.h"
/**
 * _pow_recursion - power
 * @x:int
 * @y:int
 * Return:int
 */

int _pow_recursion(int x, int y)
{
	const int i = x;
	if (y > 0)
	{
		if (y == 1)
			return (x);
		x *= _pow_recursion(x * i, y - 1);
	}
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x);
}
