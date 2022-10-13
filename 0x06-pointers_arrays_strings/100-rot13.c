#include "main.h"

/**
  * rot13 - rotates each character of string 13 places
  *
  * @c: char type pointer variable
  * Return: Rotated string 'c'
  */
char *rot13(char *c)
{
	int i, j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (c[i] == alpha[j])
			{
				c[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (c);
}
