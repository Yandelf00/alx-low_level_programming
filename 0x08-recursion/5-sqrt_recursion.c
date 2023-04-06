#include "main.h"
/**
 *sqrtt - a function that is going to help find the sqrt.
 *@n: the int we want to find its sqrt.
 *@y: another in initialized to zero to find n sqrt.
 *Return: returns n sqrt.
 */
int sqrtt(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y < n)
	{
		return (sqrtt(n, ++y));
	}
	return (-1);
}
/**
 *_sqrt_recursion - a function that calculates sqrt of an int.
 *@n:an int.
 *Return: returns the sqrt of n.
 */
int _sqrt_recursion(int n)
{
	return (sqrtt(n, 0));
}

