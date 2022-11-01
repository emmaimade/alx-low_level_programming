#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of the two diagonals of a
  * square matrix of integers.
  *
  * @a: pointer to 2D array of chars
  * @size: size of the square matrix
  * Return: Nothing
  */
void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1;
	int primary = 0, secondary = 0;

	while (i < (size * size))
	{
		primary += a[i];
		i += size + 1;
	}

	while (j < (size * size - 1))
	{
		secondary += a[j];
		j += size - 1;
	}

	printf("%d, %d\n", primary, secondary);

}
