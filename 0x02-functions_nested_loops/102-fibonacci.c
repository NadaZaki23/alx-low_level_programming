#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f0 = 0;
	int f1 = 1;
	int fn, count;

	for (count = 0; count < 50; count++)
	{
		if (count == 0)
		{
			printf("%d, ", f1);
			continue;
		}
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		printf("%d, ", fn);
	}
	return (0);
}
