#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes to cncatenate from second string
 * Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int n_int, size, i, j;
	int len1, len2;

	n_int = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n_int < 0)
		return *(NULL);
	for (i = 0; s2[i] != '\0'; i++)
		;
	len2 = i;
	if (n_int >= len2)
		n_int = len2;
	for (i = 0; s1[i] != '\0'; i++)
		;
	len1 = i;
	size = len1 + n_int + 1;
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n_int; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
