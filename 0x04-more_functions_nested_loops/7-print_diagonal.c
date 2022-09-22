#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the terminal
* @n: the number of time \ is drawn
* Return: 0.
*/
void print_diagonal(int n)
{
	int a, b;

	a = 0;
	while (n > 0)
	{
		b = a;
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
		n--;
	}
	if (a <= 0)
		_putchar('\n');
}
