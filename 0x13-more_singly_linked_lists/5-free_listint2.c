#include "lists.h"

/**
 * free_listint2 - second func that frees listint_t
 * @head: double pointer to the beginning of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	while (head && *head)
	{
		p = *head;
		*head = (**head).next;
		free(p);
	}
}
