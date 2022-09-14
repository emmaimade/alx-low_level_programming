#include <stdio.h>

/**
 * main - main block
 *
 * Description: Prints all the single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
