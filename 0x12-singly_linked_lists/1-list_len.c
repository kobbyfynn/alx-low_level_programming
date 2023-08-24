#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 *
 * @h: pointer to the list
 *
 * Return: number of elements in list.
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
