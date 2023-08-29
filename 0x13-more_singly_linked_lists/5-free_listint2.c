#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list and
 * sets the head to NULL
 *
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		i = (*head)->i;
		free(*head);
		*head = i;
	}
}
