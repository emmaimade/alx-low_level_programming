#include "main.h"

/**
  * _strpbrk -  Locates the first occurrence in s of any bytes in accept
  *
  * @s: string to be searched
  * @accept: string containing characters to be searched for
  * Return: pointer to the byte in s that matches one of the bytes in accept,
  * or Null if no such byte is found
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
		i++;
	}

	return (0);
}
