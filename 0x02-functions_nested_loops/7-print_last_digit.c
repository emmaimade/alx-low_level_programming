#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
* @num: int type number
* Return: last digit of @n
*/
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = -1 * (num % 10);
		_putchar(num + '0');
		return (num);
	}
	else
	{
		num = num % 10;
		_putchar(num + '0');
		return (num);
	}
}
