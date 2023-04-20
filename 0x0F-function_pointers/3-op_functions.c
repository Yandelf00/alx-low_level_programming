#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sum of a and b
 * @a: our first in
 * @b: our second int
 * Return: a sum if it is successful
 */

int op_add(int a, int b)
{
	return ((a) + (b));
}
/**
 * op_sub - difference between a and b
 * @a: our first int
 * @b: our second int
 * Return: the difference if it's succesful
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}
/**
 * op_mul - multiply a and b
 * @a: our first integer
 * @b: our second integer
 * Return: the multiplication of both if succesful
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - divides a and b
 * @a: our first integer
 * @b: our second integer
 * Return: the division if it's succesful
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}
/**
 * op_mod - Module of a and b
 * @a: our fist integer
 * @b: our second integer
 * Return: the modulo if it's succesful
 */
int op_mod(int a, int b)
{
	if (b)
		return ((a) % (b));
	printf("Error\n");
	exit(100);
}
