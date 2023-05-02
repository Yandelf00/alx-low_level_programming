#include "lists.h"

/**
 * add_nodeint - func that adds a new node
 * @head: first node of the linked list
 * @n: the new value
 * Return: the address of the new element, NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	(*new).n = n;
	(*new).next = *head;

	*head = new;

	return (*head);
}
