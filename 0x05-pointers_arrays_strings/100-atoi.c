#include "main.h"

/**
* _atoi - Converts a string to an integer
*
* @s: char type pointer variable
* Return: First integer found in the string
*/
int _atoi(char *s)
{
	int i;
	int m, n;

	m = 0;
	n = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			n *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (m < 0)
				m = (m * 10) - (s[i] - '0');
			else
				m = (s[i] - '0') * -1;

		if (s[i + 1] < 48 || s[i + 1] > 57)
			break;
		}
	}
	if (n < 0)
		m *= -1;

	return (m);
}
