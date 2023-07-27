#include "main.h"

/**
 * leet - encodes a string int 1337
 * @s: pointer to string
 * Return: a pointer to the resulting string dest
 */

char *leet(char *s)
{
	int i, x;
	char code[5][3] = {{'a', 'A', '4'},
			   {'e', 'E', '3'},
			   {'o', 'O', '0'},
			   {'t', 'T', '7'},
			   {'l', 'L', '1'}};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 6; x++)
		{
			if (s[i] == code[x][0] || s[i] == code[x][1])
			{
				s[i] = code[x][2];
			}
		}
	}
	return (s);
}
