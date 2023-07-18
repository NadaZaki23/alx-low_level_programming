#include "main.h"
#include <stdio.h>

int _putchar(char c)
{
	putchar(c);
	return (0);
}

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
