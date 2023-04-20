#include "function_pointers.h"

/**
 * int_index - our function that searches for an integer
 * @array: our array of integers
 * @size: size of our array
 * @cmp: pointer to the function to be used to compare values
 * Return: return index on success, if it fails it returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
