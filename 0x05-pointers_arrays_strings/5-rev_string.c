#include "main.h"

/**
* rev_string - Reverses a string stored in an array
*
* @s: char type pointer variable
* Return: Nothing
*/
void rev_string(char *s)
{
	int i, j, l;
	char h;

	for (i = 0; s[i] != '\0'; ++i)
		;

	l = i;
	for (i--, j = 0; j < l / 2; i--, j++)
	{
		h = s[j];
		s[j] = s[i];
		s[i] = h;
	}
}
