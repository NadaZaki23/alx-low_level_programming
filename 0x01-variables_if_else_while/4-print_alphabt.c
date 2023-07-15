#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 97; ch < 123; ch++)
	{
		if (ch == 113 || ch == 101)
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
