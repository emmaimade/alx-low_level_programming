#include "main.h"

int _strlen(char *s);
int _palindrome(char *n, int i, int j);

/**
  * is_palindrome - checks if a string is palindrome or not
  *
  * @s: char type pointer
  * Return: 1 if a string is a palindrome and 0 if not
  */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);
	if (len == 0)
		return (1);
	return (_palindrome(s, 0, len - 1));
}

/**
  * _strlen - gets the lenght of a string
  *
  * @s: char type pointer
  * Return: length string.
  */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
  * _palindrome - checks if a string is palindrome or not
  *
  * @n: char type pointer
  * @i: int type variable
  * @j: int type variable
  * Return: 1 if a string is a palindrome and 0 if not.
  */
int _palindrome(char *n, int i, int j)
{
	if (i < j + 1)
		return (_palindrome(n, i + 1, j - 1));
	else if (i == j)
		return (1);
	else if (n[i] != n[j])
		return (0);
	else
		return (1);
}
