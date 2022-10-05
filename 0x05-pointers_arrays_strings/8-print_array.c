#include "main.h"
#include <stdio.h>

/**
* print_array - Prints n number of elements of an array separated by comma
*
* @a: int type pointer variable
* @n: int type variable
* Return: Nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
