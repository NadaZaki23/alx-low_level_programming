#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: pointer to a string
 */

void puts2(char *str)
{
	int i, size;

	size = strlen(str);
	for (i = 0; i < size; i++)
	{
		if (i % 2 == 1)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
