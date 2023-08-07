#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - copy string given to a newly allocated space in memory
 * @str: string given as a parameter
 * Return: a pointer to the newly allocated space in memeory
 *       : (NULL) if str = NULL or insufficient memory was available
 */

char *_strdup(char *str)
{
	int i, size = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}
	size++;
	dup = malloc(sizeof(*dup) * size);
	if (dup != NULL)
	{
		for (i = 0; i < size; i++)
		{
			dup[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
}
