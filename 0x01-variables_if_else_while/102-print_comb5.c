#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, m, n;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; i < 57; j++)
		{
			for (m = i; m < 58; m++)
			{
				for (n = j + 1; j < 58; j++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(m);
					putchar(n);
					if (i == 57 && j == 56 && m == 57 && n == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				n = 48;
			}
		}
	}
	putchar('\n');

	return (0);
}
