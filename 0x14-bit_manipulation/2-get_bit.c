#include "main.h"

/**
  * get_bit - a func that returns the value of a bit at a given index
  * @n: a number
  * @index: our index
  * Return: the value of the bit at index, -1 if it fails
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
