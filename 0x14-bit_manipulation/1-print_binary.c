#include "main.h"

/**
  * print_binary - func that prints the binary representation of a num
  * @n: the num that we are going to convert
  */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
