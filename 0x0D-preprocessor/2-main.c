#include <stdio.h>

/*
 * main - prints name of file it was compiled from
 * Return: Always 0 (success)
 */

int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
