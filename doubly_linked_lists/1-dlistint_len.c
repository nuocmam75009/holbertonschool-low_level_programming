#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
