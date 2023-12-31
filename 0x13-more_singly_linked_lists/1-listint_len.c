#include "lists.h"

/**
 * listint_len - returns the nubmer of elements in a linked listint_t list
 * @h: pointer to head of singly linked list
 * Return: count of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
