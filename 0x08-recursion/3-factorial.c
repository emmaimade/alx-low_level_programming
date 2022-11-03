#include  "main.h"

/**
  * factorial - Calculate the factorial of a given number
  *
  * @n: int type variable
  * Return: On success factorial of n,
  * On error, -1 is returned.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
