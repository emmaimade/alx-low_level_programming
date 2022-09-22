#include "main.h"

/**
* print_line - Draws a straight line in the terminal
*
* @n: int type variable
* Return: 0
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
