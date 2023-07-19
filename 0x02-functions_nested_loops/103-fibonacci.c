#include <stdio.h>

/**
 * main - print sum of even terms in fibonnaci
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long sum;
	long f0 = 1;
	long f1 = 1;
	long fn;

	while (f1 < 4000000)
	{
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		if (fn <= 4000000 && fn % 2 == 0)
			sum += fn;
	}
	printf("%ld\n", sum);
	return (0);
}
