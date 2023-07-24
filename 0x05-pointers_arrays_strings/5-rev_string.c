#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	int i, length;
	char cpy;

	length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		cpy = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = cpy;
	}
}
