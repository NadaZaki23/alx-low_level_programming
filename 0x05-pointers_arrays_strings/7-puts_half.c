#include "main.h"
#include <string.h>

/**
 * puts_half -  prints second half of the string
 * @str: pointer to a string
 */

void puts_half(char *str)
{
	int size, i;

	size = strlen(str);
	if (size % 2 == 0)
		i = size / 2;
	else
		i = size / 2 + 1;
	for (; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
