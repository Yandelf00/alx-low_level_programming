#include "search_algos.h"

/**
 *linear_search - linear search algo to find value
 *@array: pointer to the first element of the arra
 *@size: the number of elements in array
 *@value: the value to search for
 *Return: index of the value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
