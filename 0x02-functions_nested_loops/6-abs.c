#include "main.h"

/**
* _abs - Computes the absolute value of the integer
* @n: int type number
* Return: absolute value of @n
*/
int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
