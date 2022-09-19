#include "main.h"

/**
*main - Entry point
*
*Description: A program that prints _putchar, followed by a new line
*Return: 0
*/
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
