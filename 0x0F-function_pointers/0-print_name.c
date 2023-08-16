#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: input name to print
 * @f: pointer to function printing name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
