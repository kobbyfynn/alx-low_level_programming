#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 *
 * @head: head of list_t list
 *
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *i;

	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		i = *head;
		while (i->next)
		{
			i = i->next;
		}
		i->next = new;
	}
	return (new);
}
