#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  * Description: Adds Positive Numbers.
  *
  * @argc: int type variable, argument count
  * @argv: char type pointer to an array
  * Return: 0 if no digits is passed
  * Otherwise 1, if one of the number contains symbols that are not digits,
  * print Error, followed by a new line.
  */
int main(int argc, char **argv)
{
	int i, sum, x;
	char *p;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			x = strtol(argv[i], &p, 10);

			if (!*p)
				sum += x;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
