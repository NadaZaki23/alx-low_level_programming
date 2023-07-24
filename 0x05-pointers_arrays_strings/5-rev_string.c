#include "main.h"
#include <stdlib.h>

/**
 * rev_string - reverse a string
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	int length = 0, i = 0;
	char *head = s;

	while (1)
	{
		if (*s == '\0')
			break;
		length += 1;
		s += 1;
	}

	char cpy[length];

	for (; s >= head; s--)
	{
		cpy[i] = *s;
		i++;
	}
	cpy[i] = '\0';
	for (i = 0; i < length; i++)
	{
		*s = cpy[i];
	}
}
