#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * If str is NULL, print [0] (nil)
 *
 * @h: pointer to list
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}

	return (i);
}
