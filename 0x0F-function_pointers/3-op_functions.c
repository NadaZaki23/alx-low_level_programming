#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two things
 * @a: 1st number
 * @b: 2nd number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: 1st number
 * @b: 2nd number.
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get remainder of the division of two numbers
 * @a: 1st number
 * @b: 2nd number.
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
