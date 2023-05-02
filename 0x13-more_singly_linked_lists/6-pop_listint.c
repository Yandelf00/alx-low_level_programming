#include "lists.h"

/**
 * pop_listint - func that deletes the head node of a linked list
 * @head: double pointer to the linked list
 * Return: n
 */

int pop_listint(listint_t **head)
{
	listint_t *hold;
	int n;

	if (head && *head)
	{
		hold = *head;
		n = (**head).n;
		*head = (**head).next;
		free(hold);
		return (n);
	}
	return (0);
}
