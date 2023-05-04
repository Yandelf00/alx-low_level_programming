#include "main.h"

/**
  * binary_to_uint - function that converts a bnry to unit
  * @b: binary num
  * Return: the converted number, 0 if it fails
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, place;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		;
	len--;
	for (place = 1, uint = 0; len >= 0; len--)
	{
		if (b[len] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[len] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
