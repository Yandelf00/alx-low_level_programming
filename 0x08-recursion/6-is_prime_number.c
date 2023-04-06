#include "main.h"
/**
 *prime - a function that finds if in is prime or not.
 *@n:our int.
 *@x:another int that is going to help.
 *Return: returns 1 if in is prime and 0 otherwise.
 */
int prime(int n, int x)
{
	if (x > 9)
		return (1);
	else if (n % x != 0)
		return (prime(n, ++x));
	return (0);
}

/**
 * is_prime_number - func that finds out if n is prime
 * @n: an int.
 * Return: the return of func prime
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (help(n, 2));
}
