#include "main.h"

/**
* puts2 - Prints the even in an array
*
* @str: char type pointer variable
* Return: Nothing
*/
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
		;

	for (j = 0; j < i; j++)
	{
		if (str[j] % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
