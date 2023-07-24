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
		if (*str == '\0)
			break;
		if (i % 2 == 1)
			continue;
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');
}
