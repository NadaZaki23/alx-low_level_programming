#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer of current head
 * @str: string - value of str in node
 * Return: address of new element or NULL if it failed
 * free both value and newNode if strdup returned NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *value;
	int len;
	list_t *newNode;

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
	for (len = 0; str[len]; len++)
		;
	newNode->str = value;
	newNode->len = len;
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
