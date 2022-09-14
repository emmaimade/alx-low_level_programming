#include <stdio.h>

/**
 * main - main block
 *
 * Description: Prints the alphabet in lowercase expect q and e
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
