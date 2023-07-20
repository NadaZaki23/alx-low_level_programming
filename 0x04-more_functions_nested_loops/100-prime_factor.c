#include <stdio.h>

/**
 * main - program finds and prints largest prime factr of number 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long prime = 2;

	while (prime < number)
	{
		if (number % prime == 0)
		{
			number /= prime;
			prime = 2;
		}
		else
			prime++;
	}
	printf("%lu\n", prime);
	return (0);
}
