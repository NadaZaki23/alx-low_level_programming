#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a char
 * @arg: list of arguments
 */
void print_char(va_list arg)
{
	char c;

	letter = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - prints a number
 * @arg: list of arguments
 */
void print_int(va_list arg)
{
	int x;

	num = va_arg(arg, int);
	printf("%d", x);
}

/**
 * print_float - prints a float
 * @arg: list of arguments
 */
void print_float(va_list arg)
{
	float f;

	num = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_string - prints a string
 * @arg: list of arguments
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything
 * @format: argument types
 * @...: parameters
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
