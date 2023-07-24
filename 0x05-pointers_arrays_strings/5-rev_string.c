#include "main.h"
#include <stdlib.h>

/**
 * rev_string - reverse a string
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	int i, length, cpy;

	length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		cpy = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
