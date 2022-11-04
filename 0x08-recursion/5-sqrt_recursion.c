#include "main.h"
int _helper(int x, int i);

/**
  * _sqrt_recursion - returns the natural square root of a number
  *
  * @n: int type variable
  * Return: -1 if n does not have a natural square root
  * Else return natural square root.
  */
int _sqrt_recursion(int n)
{
	return (_helper(n, 1));
}

/**
  * _helper - returns the natural square root of number to _sqrt_recursion
  *
  * @x: int type variable
  * @i: int type variable
  * Return: -1 if n does not have a natural square root
  * Else return natural square root.
  */
int _helper(int x, int i)
{
	int square;

	square = i * i;
	if (square == x)
		return (i);
	else if (square < x)
		return (_helper(x, i + 1));
	else
		return (-1);
}
