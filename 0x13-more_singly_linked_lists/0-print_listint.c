#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t list
 * @h: pointer to list's head
 * Return: count of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counst = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
