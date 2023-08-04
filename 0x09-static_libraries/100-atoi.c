#include "main.h"
#include <string.h>

/**
 * _atoi - convert a string to an integer
 * @s: pointer to string
 */

int _atoi(char *s)
{
	int i, size, negative;
	int digit = 0, number = 0;

	size = strlen(s);
	for (i = 0; i < size; i++)
	{
		if (s[i] == '-')
		{
			negative = 1;
			continue;
		}
		else
		{
			negative = 0;
		}
		digit = s[i] - '0';
		if (negative == 1)
			digit = -digit;
		number = number * 10 + digit;
		if (s[i + 1] < '0' || s[i + 1] > '9')
			break;
	}
	return (number);
}
