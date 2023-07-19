#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: given number to function
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
		m *= -1;
	_putchar('0' + m);
	return (m);
}
