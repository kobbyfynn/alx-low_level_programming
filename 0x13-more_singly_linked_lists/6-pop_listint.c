#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 *
 * @head: pointer to head of list
 *
 * Return: 0 if linked list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *i;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	i = *head;
	*head = i->next;
	n = i->n;
	free(i);
	return (n);
}
