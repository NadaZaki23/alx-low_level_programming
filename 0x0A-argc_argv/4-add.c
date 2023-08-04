#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 *      - prints result, followed by a new line
 *      - if no number passed print 0, followed by a new line
 *      - if one of the numbers contains symbols, print "Error"
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 * Return: 0 (success)
 *       : 1 (fail) one number contains symbol
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result += atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
