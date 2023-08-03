#include "main.h"

/**
 * _prime - divide the number by higher div
 * @n: number to be checked
 * @div: divisor
 * Return: 1 if prime
 *       : 0 if not prime
 */

int _prime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (_prime(n, div + 1));
}

/**
 * is_prime_number - check for prime number
 * @n: input number
 * Return: 1 if prime
 *       : 0 if not prime
 */

int is_prime_number(int n)
{
	int div = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (_prime(n, div));
}
