#include <stdio.h>

/**
* main - prints the first 500 Fibonacci numbers starting with
* 1 and 2, followed by a new line
* Return: 0
*/
int main(void)
{
	unsigned long count, i, j, k;

	i = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (count == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
