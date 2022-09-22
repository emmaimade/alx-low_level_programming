#include "main.h"

/**
* print_triangle - Prints a triangle if size is greater than 0 and space
* if size is less than or equal to 0
* @size: height of the triangle.
*/
void print_triangle(int size)
{
	int p, q;

	if (size > 0)
	{
		for (p = 1; p <= size; p++)
		{
			for (q = size; q >= 1; q--)
			{
				if (p < q)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
