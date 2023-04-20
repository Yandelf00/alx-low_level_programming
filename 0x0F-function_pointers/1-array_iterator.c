#include "function_pointers.h"

/**
 * array_iterator - our function
 * @array: array of parameters to execute
 * @size: the size of our array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size)
		for (i = 0; i < size; i++)
			action(array[i]);
}
