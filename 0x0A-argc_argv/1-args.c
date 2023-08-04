#include <stdio.h>

/**
 * main - program that prints number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array containint program command line arguments
 * Return: always 0 (success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
