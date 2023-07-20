#include <stdio.h>

/**
 * main - Fizz-Buzz test program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100; i++)
	{
		if (i > 1)
			printf(" ");
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			continue;
		}
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
