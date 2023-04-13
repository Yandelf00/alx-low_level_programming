#include "main.h"
#include <stdio.h>
/**
 **malloc_checked - function that allocates memory with malloc
 *@b: our unsigned int
 *Return: pointer to the allocated memory if success, termination if it fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = (void *)malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
