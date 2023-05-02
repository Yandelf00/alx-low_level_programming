#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: pointer to the beginning of the list
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head;
		head = (*head).next;
		free(p);
	}
}
