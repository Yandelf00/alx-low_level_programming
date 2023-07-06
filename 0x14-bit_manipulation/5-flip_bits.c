#include "main.h"

/**
  * flip_bits - function that count bits to get from one number to another
  * @n: number
  * @m: the other number
  * Return:  the number of bits you would need
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
