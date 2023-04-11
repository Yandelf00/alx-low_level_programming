#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **create_array - function for creation of array of chars
 *@size: unsigned int that represents the size
 *@c: the character we need
 *Return: 0 for success, else returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *jomla = (char *)malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (jomla == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(jomla + i) = c;
		i++;
	}
	return(jomla);

}
