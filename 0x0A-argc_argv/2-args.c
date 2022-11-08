#include "main.h"
#include <stdio.h>

/**
  * main - Entry Point
  * Description: Prints all arguments it receives.
  *
  * @argc: int type variable, argument count
  * @argv: char type pointer to an array
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
