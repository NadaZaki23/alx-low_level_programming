#include <stdio.h>
#include <stdlib.h>

/**
 * main - program the multiplies two numbers (from command line arguments)
 *      - prints result of multiplication
 *      - print "Error" if no arguments recieved
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 * Return: 0 (success)
 *       : 1 (fail) program didn't recieve two arguments
 */

int main(int argc, char *argv[])
{
	/*int num1, num2, result;*/

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	/**
	 * num1 = atoi(argv[1]);
	 * num2 = atoi(argv[2]);
	 * result = num1 * num2;
	 */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
