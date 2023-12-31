#include "lists.h"

/**
 * list_len - return number of elements in a linked list_t list
 * @h: head - first node in a singly linked list
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
