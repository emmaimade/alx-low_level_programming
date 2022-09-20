#include "main.h"

/**
* times_table - Prints multiplication table from 0 to 9
* Return: 0
*/
void times_table(void)
{
	int m, n, res;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			res = (m * n);
			if (n != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && n != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
