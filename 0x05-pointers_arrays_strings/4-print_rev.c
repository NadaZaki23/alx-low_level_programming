#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: input string
 */

void print_rev(char *s)
{
	char * head = s;

	while (1)
	{
		if (*s == '\0')
			break;
		s += 1;
	}
	for (s = s - 1; s >= head; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
