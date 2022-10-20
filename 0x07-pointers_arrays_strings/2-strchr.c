#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string to be searched
 * @c: char to search for
 * Return: Pointer to the first occurrence of 'c'
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
