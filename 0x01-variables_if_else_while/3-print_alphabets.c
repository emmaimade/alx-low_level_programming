#include <stdio.h>

/**
 * main - main block
 *
 * Description: Prints the alphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char c, u;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	u = 'A';
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
