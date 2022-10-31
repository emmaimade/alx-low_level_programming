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
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{	return (s);
				break;
			}
		}
		s++;
	}
	return (s);
}
