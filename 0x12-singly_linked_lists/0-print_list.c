#include "lists.h"

/**
 * print_list - prints all the elemnts of a list_t list
 * @h: head - first node of singly linked list
 * Return: the number of nodes
 * if str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
