#include "lists.h"

/**
 *list_len - function that returns the number of elements of list
 *@h : node
 *Return: num of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		nodenum++;
		h = h->next;
	}
	return (nodenum);
}
