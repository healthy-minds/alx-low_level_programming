#include "lists.h"

/**
 * list_len - Returns the number of elements in the list_t list.
 * @h: The list_t list
 *
 * Returns: The number of nodes in list_t list
 */

size_t list_len(const list_t *h)
{
	size_t x;
	x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
