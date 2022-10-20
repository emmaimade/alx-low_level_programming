#include "main.h"

/**
  * _strchar - Locates a character in a string
  *
  * @s: char array to be searched.
  * @c: Character to be located.
  *
  * Return: first occurrence of the character c
  * or NULL if the character is not found.
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
