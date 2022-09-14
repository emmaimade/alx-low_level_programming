#include <stdio.h>
/**
 * main - main block
 *
 * Description: Prints the lowercase alphbets in reverse
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
