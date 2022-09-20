#include "main.h"

/**
* _isalpha - Returns 1 if the letter is lowercase or uppercase and 0 if not.
* @c: char type letter
* Return: 1 if letter is lowercase or uppercase and 0 if otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 'A' || c >= 'a') && (c <= 'Z' || c <= 'z'))
		return (1);
	else
		return (0);
}
