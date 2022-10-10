#include "main.h"

/**
* reverse_array - Reverses the content of array of integers
*
* @a: int type pointer variable
* @n: int type variable
* Return: Nothing
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
