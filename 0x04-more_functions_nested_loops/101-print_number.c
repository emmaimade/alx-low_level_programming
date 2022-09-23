#include "main.h"

/**
* print_number - Prints an integer
* @n: integer to be printed
* Return: 0.
*/
void print_number(int n)
{
	/*if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 0)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else 
		_putchar(n + '0');*/
		long len, res, i, temp, expo;

	res = n;
	expo = len =  1;
/*Check negatives*/
	if (res < 0)
	{
		res *= -1;
		_putchar('-');
	}

/**/
	temp = res;
	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}

/*Create Exponent*/
	for (i = 1; i < len; i++)
		expo *= 10;
/*Main */
	while (expo > 1)
	{
		_putchar((res / expo) % 10 + '0');
		expo /= 10;
	}
	_putchar(res % 10 + '0');
}
