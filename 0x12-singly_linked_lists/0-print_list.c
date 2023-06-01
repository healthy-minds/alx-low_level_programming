#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of the list_t list.
 * @h: list_t list
 *
 * Return: The number of nodes in the list_t list
 */

size_t print_list(const list_t *h)
{
	size_t x;

	for(x = 0; h; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return(x);
}
