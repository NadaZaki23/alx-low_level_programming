#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	char space = "\n";

	for (ch = 97; ch < 123; ch++)
		putchar(ch);
	putchar(space);
	return (0);
}
