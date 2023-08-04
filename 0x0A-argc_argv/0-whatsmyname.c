#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: size of argv array
 * @argv: array containing progam command line arguments
 * Return: always 0 (success)
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
