#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of
 * a listint_t list
 *
 * @head: head of list
 *
 * @n: const int
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *j;

	i = malloc(sizeof(listint_t));

	if (i == NULL)
	{
		return (NULL);
	}
	i->n = n;

	i->next = NULL;
	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	else
	{
		j = *head;
		while (j->next)
		{
			j = j->next;
		}
		j->next = i;
	}
	return (i);
}
