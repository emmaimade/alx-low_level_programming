#include "main.h"

/**
  * _print_rev_recursion - prints a string in reverse
  *
  * @s: pointer to char be reversed and printed
  * Return: Nothing.
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
