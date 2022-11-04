#include "main.h"

int _primeno(int x, int i);

/**
  * is_prime_number - checks if a number is a prime number.
  *
  * @n: int type variable
  * Return: 1 if the n is a prime number
  * Otherwise return 0.
  */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else
		return (_primeno(n, 2));
}

/**
  * _primeno - checks if a number is a prime number
  *
  * @x: int type variable
  * @i: int type variable
  * Return: 1 if x is a prime number
  * Else return 0.
  */
int _primeno(int x, int i)
{
	if (x % i == 0)
		return (0);
	else if (i >= x / 2)
		return (1);
	else
		return (_primeno(x, i + 1));
}
