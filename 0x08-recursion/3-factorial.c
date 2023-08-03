#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: input number
 * Return: factorial
 *       : -1 if -ve
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
