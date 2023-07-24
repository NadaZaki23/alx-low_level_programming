#include "main.h"
#include <stdlib.h>

/**
 * rev_string - reverse a string
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	char *head1, *head2, *cpy;
	int size = 0;

	head1 = s;
	while (1)
	{
		if (*s == '\0')
			break;
		size += 1;
		s += 1;
	}
	cpy = malloc(size + 1);
	head2 = cpy;
	s -= 1;
	for (; s >= head1; s--)
	{
		*cpy = *s;
		cpy += 1;
	}
	cpy -= 1;
	for (; cpy >= head2; cpy--)
	{
		*s = *cpy;
		s += 1;
	}
	*s = '\0';
}
