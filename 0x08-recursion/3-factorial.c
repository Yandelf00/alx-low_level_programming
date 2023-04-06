#include "main.h"
/**
 *factorial - a function that calculates factorial of an int.
 *@n:an int that we want to calculate its factorial.
 *Return: returns the factorial of n.
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
