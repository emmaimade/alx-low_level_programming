#include "main.h"

/**
* print_square - Prints a square followed by a new line
* @size: number of times to print #
* Return: 0
*/
void print_square(int size)
{
	int m, n;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
