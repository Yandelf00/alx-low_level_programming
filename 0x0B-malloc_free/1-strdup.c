#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - gets the string to a newly allocated space in memory
 * @str: our string
 * Return: returns NULL if it fails, else returns the string
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int x, len;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++)
		;
	len++;
	ptr = malloc(len * sizeof(char));

	if (!ptr)
		return (NULL);

	for (x = 0; x <= len; x++)
		ptr[x] = str[x];

	return (ptr);
}

