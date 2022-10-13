#include "main.h"

/**
  * print_number - Print an integer
  *
  * @n: int type variable
  * Return: Nothing
  */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
