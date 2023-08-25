#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head of a singly linked list
 * @str: value of str in the structure
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *value;
	unsigned int size;
	list_t *newNode;
	list_t *temp;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	value = strdup(str);
	if (value == NULL)
	{
		free(value);
		free(newNode);
		return (NULL);
	}

	for (size = 0; str[size]; size++)
		;

	newNode->str = value;
	newNode->len = size;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (*head);
}
