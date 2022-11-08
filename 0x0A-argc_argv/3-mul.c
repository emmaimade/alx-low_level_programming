#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * Description: Multiply two numbers
  *
  * @argc: int type variable
  * @argv: char type pointer to an array.
  * Return: 0 on success
  * Otherwise 1 on Error
  */
int main(int argc, char **argv)
{
	int mul, x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
