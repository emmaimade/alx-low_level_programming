#include "main.h"

/**
* puts2 - Prints the even in an array
*
* @str: char type pointer variable
* Return: Nothing
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
