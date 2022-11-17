#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  * Description: Prints the minimum number of coins
  * to make change for an amount of money.
  *
  * @argc: int type variable, argument count.
  * @argv: char type pointer to an array.
  * Return: 1, if the number of arguments
  * passed to your program is not exactly 1,
  * print Error, followed by a new line
  * Otherwise 0.
  */
int main(int argc, char **argv)
{
	int cents = atoi(argv[argc - 1]), quarter, dime;
	int nickel, deuce, penny, total = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (cents > 0)
	{
		quarter = cents / 25;
		dime = cents % 25 / 10;
		nickel = cents % 25 % 10 / 5;
		deuce = cents % 25 % 10 % 5 / 2;
		penny = cents % 25 % 10 % 5 % 2 / 1;
		total = quarter + dime + nickel + deuce + penny;
		printf("%d\n", total);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
