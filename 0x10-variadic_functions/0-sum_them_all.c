#include "variadic_functions.h"

/**
  * sum_them_all - sums all of it's arguments
  *
  * @n: unsigned int type variable constant
  * Return: Sum on Success, otherwise 0.
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list add;

	if (n > 0)
	{
		va_start(add, n);

		sum = 0;
		for (i = 0; i < n; i++)
		{
			sum += va_arg(add, int);
		}
		va_end(add);
	}
	else
		return (0);

	return (sum);
}
