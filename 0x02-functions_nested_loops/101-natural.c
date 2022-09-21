#include <stdio.h>

/**
* main - computes and print the sum of all the multiple of
* 3 or 5 below 1024.
* Return: 0.
*/
int main(void)
{
	int i, r;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			r += i;
	printf("%d\n", r);
	return (0);
}
