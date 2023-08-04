#include "main.h"

/**
 * _puts - prints a string followed by a new line, to sdout
 * @str: input string
 */

void _puts(char *str)
{
	while (1)
	{
		if (*str == '\0')
			break;
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');
}
