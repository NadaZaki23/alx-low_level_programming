#include <stdio.h>

/**
 * main - program prints all arguments it receives (one per line)
 * @argc: number of command line arguments
 * @argv: array containing program command line arguments
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
