#include "lists.h"

/**
 * listint_len - return number of elements
 * @h: pointer to first element
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int j;

	for (j = 0; h; h = (*h).next, j++)
		;
	return (j);
}
