#include "main.h"
#include <stdio.h>

/**
  * main - Entry point
  * Description: Prints program name followed by a new line
  *
  * @argc: int type variable, argument count
  * @argv: char type pointer to an array
  * Return: 0
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
