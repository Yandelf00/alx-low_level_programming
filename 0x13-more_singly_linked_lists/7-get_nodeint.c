#include "lists.h"

/**
 * get_nodeint_at_index - func that returns the nth node of a linked list
 * @head: pointer to the start of linked list
 * @index: i
 * Return: the nth node, NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++, head = (*head).next)
		if (i == index)
			return (head);
	return (NULL);
}
