#include "main.h"

/**
  * clear_bit - function that sets the value of a bit to 0
  * @n: a number
  * @index: our index
  * Return: 1 if it worked, -1 if it fails
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (index > 63 || !n)
		return (-1);
	m = 1 << index;
	*n = (*n & ~m) | ((0 << index) & m);
	return (1);
}
