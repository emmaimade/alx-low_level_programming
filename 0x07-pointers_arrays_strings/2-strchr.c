#include "main.h"

/**
  * _strchar - Function that locates a character in a string
  *
  * @s: String to be searched.
  * @c: Character to be located.
  * Return: pointer to the first occurrence of the character c in the string s
  * or NULL if the character is not found
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
