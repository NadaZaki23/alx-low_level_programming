#include "lists.h"

/**
 * get_nodeint_ad_index - returns nth node of a listint_t linked list
 * @head: pointer to head of a singly linked list
 * @index: numbet of node
 * Return: head to nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int value;

	for (value = 0; value < index; value++)
	{
		if (!head)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
