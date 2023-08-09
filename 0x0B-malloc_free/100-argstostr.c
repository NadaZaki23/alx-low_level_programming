#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenates all the arguments of program
 *           - each argument followed by \n
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to a new string
 *       : NULL (fails)
 */

char *argstostr(int ac, char **av)
{
	int i, j, count, len, size = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][j] != '\0')
			len++;
		size += len;
	}
	size += (ac + 1);
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[count++] = av[i][j];
		}
		s[count++] = '\n'
	}
	return (str);
}
