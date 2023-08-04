#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for amount of money
 *      - can use unlimited number of coins of values 25, 10, 5, 2 and 1 cen
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 * Return: 0 (success)
 *       : 1 (fail) if arguments passed is not exactly 1
 */

int main(int argc, char *argv[])
{
	int remain, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	remain = atoi(argv[1]);
	coins += remain / 25;
	remain %= 25;
	coins += remain / 10;
	remain %= 10;
	coins += remain / 5;
	remain %= 5;
	coins += remain / 2;
	remain %= 2;
	coins += remain / 1;
	printf("%d\n", coins);
	return (0);
}
