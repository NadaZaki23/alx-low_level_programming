#include <stdlib.h>
#include <time.h>

#include <stdio.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_digit;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_digit = n % 10;
	if (last_digit > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, last_digit);
	else if (last_digit == 0)
		printf("%s %d is %d and is 0\n", str, n, last_digit);
	else
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, last_digit);


	return (0);
}
