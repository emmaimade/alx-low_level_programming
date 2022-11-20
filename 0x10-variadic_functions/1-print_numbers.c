#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - function that prints numbers, followed by a new line.
  *
  * @separator: string literal
  * @n: unsigned int variable constant
  * Return: Nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	if (separator != NULL)
	{
		va_start(num, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(num, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(num);
	}
}
