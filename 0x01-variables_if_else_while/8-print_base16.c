#include <stdio.h>

/**
 * main - main block
 *
 * Description: Prints all the numbers of base16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (c = 'a'; c < 'g'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
