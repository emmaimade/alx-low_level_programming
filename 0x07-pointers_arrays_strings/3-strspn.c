#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  *
  * @s: string to be scanned
  * @accept: string containing the characters to match
  * Return: the number of bytes in the initial segment of s,
  * which consist only of characters from accept.
  */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	unsigned int len = 0;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				len++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
