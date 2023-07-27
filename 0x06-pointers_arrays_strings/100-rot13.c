#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string
 * Return: a pointer to the resulting string s
 */

char *rot13(char *s)
{
	int i, x;
	char code[][2] = {{'a', 'n'}, {'A', 'N'}, {'n', 'a'}, {'N', 'A'},
			  {'b', 'o'}, {'B', 'O'}, {'o', 'b'}, {'O', 'B'},
			  {'c', 'p'}, {'C', 'P'}, {'p', 'c'}, {'P', 'C'},
			  {'d', 'q'}, {'D', 'Q'}, {'q', 'd'}, {'Q', 'D'},
			  {'e', 'r'}, {'E', 'R'}, {'r', 'e'}, {'R', 'E'},
			  {'f', 's'}, {'F', 'S'}, {'s', 'f'}, {'S', 'F'},
			  {'g', 't'}, {'G', 'T'}, {'t', 'g'}, {'T', 'G'},
			  {'h', 'u'}, {'H', 'U'}, {'u', 'h'}, {'U', 'H'},
			  {'i', 'v'}, {'I', 'V'}, {'v', 'i'}, {'V', 'I'},
			  {'j', 'w'}, {'J', 'W'}, {'w', 'j'}, {'W', 'J'},
			  {'k', 'x'}, {'K', 'X'}, {'x', 'k'}, {'X', 'K'},
			  {'l', 'y'}, {'L', 'Y'}, {'y', 'l'}, {'Y', 'L'},
			  {'m', 'z'}, {'M', 'Z'}, {'z', 'm'}, {'Z', 'M'}};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 52; x++)
		{
			if (s[i] == code[x][0])
			{
				s[i] = code[x][1];
				break;
			}
		}
	}
	return (s);
}
