#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - function that prints strings, followed by a new line.
  *
  * @separator: string literal
  * @n: unsigned int variable constant
  * Return: Nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *args;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(str, char *);

		if (args != NULL)
			printf("%s", args);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
