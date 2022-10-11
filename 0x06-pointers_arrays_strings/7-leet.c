#include "main.h"

/**
* leet - encodes a string into 1337
*
* @s: char type pointer variable
* Return: s
*/
char *leet(char *s)
{
	int i, j;
	char arr[] = "aAeEoOtTlL";
	char r[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (s[i] == arr[j])
				s[i] = r[j / 2];
		}
	}
	return (s);
}
