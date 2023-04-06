#include "main.h"
/**
 *_pow_recursion - a function that calculates the power of an int.
 *@x:an int that we want to calculate its power.
 *@y:an second int that is the power of x.
 *Return: returns the power of x per y.
 *
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
