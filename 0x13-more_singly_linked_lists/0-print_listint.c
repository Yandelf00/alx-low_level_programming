#include "lists.h"

/**
 * print_listint - func that print the elements of linked list 
 * @h: pointer to first element
 * Return: the number of elements
 */

size_t print_listint(const listint_t *h)
{
	int j;

	for (j = 0; h; h = (*h).next, j++)
		printf("%d\n", (*h).n);

	return (j);
}
