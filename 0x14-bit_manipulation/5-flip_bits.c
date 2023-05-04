#include "main.h"

/**
  * flip_bits - function that count bits to get from one number to another
  * @n: number
  * @m: the other number
  * Return:  the number of bits you would need
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, check;

	check = (n ^ m);
	while (check)
	{
		count += (check & 1);
		check >>= 1;
	}
	return (count);
}
