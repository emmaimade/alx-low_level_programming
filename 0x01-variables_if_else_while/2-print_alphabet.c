#include <stdio.h>

/**
 * main - main block
 *
 * Description: Print the alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
