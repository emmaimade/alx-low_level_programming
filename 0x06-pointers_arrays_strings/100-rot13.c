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
	char n[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 56; j++)
		{
			if (c[i] == n[j])
			{
				c[i] = r[j];
			}
		}
	}
	return (c);
}
