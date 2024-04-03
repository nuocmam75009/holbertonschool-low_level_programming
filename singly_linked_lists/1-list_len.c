#include "lists.h"

/**
 * list_len - returns number of elements in list
 * @h: pointer to start of list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
