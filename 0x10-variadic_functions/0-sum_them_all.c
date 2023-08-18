#include "variadic_functions.h"

/**
 * sum__them_all - add all the parameters of the function
 * @n: number of parameters
 * @...: parameters to be summed up
 * Return: sum of all parameters
 *       : 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list parameters;
	unsigned int i, sum = 0;

	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(parameters, int);
	}
	va_end(parameters);
	return (sum);
}
