#include "lists.h"

/**
  * get_dnodeint_at_index - get node at  given index from a linked list
  * @head: head of linked list
  * @index: index to return value
  * Return: nth node at a given index
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++, head = head->next)
		if (i == index)
			return (head);
	return (NULL);
}
