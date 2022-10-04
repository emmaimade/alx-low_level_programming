#include "main.h"

/**
* swap_int - Swaps the value of two integers
*
* @a: int type pointer variable
* @b: int type pointer variable
* Return: Nothing.
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
