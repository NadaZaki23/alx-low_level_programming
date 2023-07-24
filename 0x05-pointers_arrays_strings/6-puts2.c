#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to a string
 */

void puts2(char *str)
{
	int i = 0;

	while (1)
	{
		if (str[i] == '\0')
			break;
		if (i % 2 == 1)
			continue;
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
