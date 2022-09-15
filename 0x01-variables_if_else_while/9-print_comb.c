#include <stdio.h>

/**
 * main - main block
 *
 * Description: Prints all possible combination of Single-digits
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
