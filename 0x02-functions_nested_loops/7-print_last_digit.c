#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: given number to function
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

       	_putchar('0' + (n % 10));

	return (n % 10);
}
