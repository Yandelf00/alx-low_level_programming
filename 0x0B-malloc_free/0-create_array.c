#include "main.h"
#include <stdlib.h>

/**
 **create_array - function for creation of array of chars
 *@size: unsigned int that represents the size
 *@c: the character we need
 *Return: 0 for success, else returns NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
