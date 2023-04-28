#include "lists.h"
#include <stdio.h>

/**
 * print_list - a func that prints all elements of a list_t
 * @h: our list struct
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodenum;
	char *str1;

	for (nodenum = 0; h; nodenum++, h = h->next)
	{
		str1 = h->str;
		if (str1)
			printf("[%i] %s\n", h->len, str1);
		else
			printf("[0] %p\n", str1);
	}
	return (nodenum);
}
