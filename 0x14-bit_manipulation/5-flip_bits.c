#include "main.h"

/**
  * flip_bits - function that count bits to get from one number to another
  * @n: number
  * @m: the other number
  * Return:  the number of bits you would need
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cnt = 0, ch;

	ch = (n ^ m);
	while (ch)
	{
		cnt += (ch & 1);
		ch >>= 1;
	}
	return (cnt);

}
