#include "main.h"
#include <stdio.h>

/**
  * main - Entry point
  * Description: Prints the number of arguments passed into it
  *
  * @argc: int type variable
  * @argv: char type pointer to array
  * Return: 0
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, count;

	i = 0;
	while (i < argc)
	{
		count = i++;
	}

	printf("%d\n", count);

	return (0);
}
