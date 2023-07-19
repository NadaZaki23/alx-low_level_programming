#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long f0 = 1;
	long f1 = 1;
	long fn;
	int count;

	for (count = 0; count < 91; count++)
	{
		if (count == 0)
		{
			printf("%ld, ", f1);
			continue;
		}
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		if (count == 49)
		{
			printf("%ld\n", fn);
		}
		else
		{
			printf("%ld, ", fn);
		}
	}
	
	

	return (0);
}
