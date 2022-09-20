#include "main.h"
/**
*1-alphabet - function
*
*Description: Prints the alphabet, in lowercase, followd by a new line
*Return: void
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
