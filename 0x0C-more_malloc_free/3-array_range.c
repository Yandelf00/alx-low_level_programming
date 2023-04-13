#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - this creates an array of integers
 * @min: this is the min value
 * @max: this is the max value
 * Return: NULL if it fails, else pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(((max - min) + 1) * sizeof(int));

	if (!ptr)
		return (NULL);

	for (i = 0; (min + i) <= max; i++)
		ptr[i] = (min + i);

	return (ptr);
}
