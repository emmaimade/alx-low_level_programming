#include "main.h"

/**
  * _pow_recursion - returns the value of x raised to the power of y.
  *
  * @x: int type variable, the base
  * @y: int type variable, the power
  * Return: -1 if y is lower than 0,
  * The value of x raised to the power of y.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
