#include "lists.h"

/**
 *print_dlistint - prints all the elements of the list
 *@h: its the head of the list
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int number_nodes = 0; 

	while(h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		number_nodes += 1;
	}
	return(number_nodes);
}
