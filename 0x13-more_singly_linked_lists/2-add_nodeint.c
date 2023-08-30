#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head of singly linked list
 * @n: valuse of added node
 * Return: pointer to new head of list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
