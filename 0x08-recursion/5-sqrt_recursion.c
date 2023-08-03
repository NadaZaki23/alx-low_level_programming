#include "main.h"

/**
 * _root - fint root of n
 * @n: number
 * @root: root test
 * Return: result
 */

int _root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (_root(n, root + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_root(n, 0));
}
