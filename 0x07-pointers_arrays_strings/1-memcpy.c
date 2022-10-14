#include "main.h"

/**
  * _memcpy - Copies memory area
  *
  * @dest: destination where memory area is to be copied to
  * @src: source where memory area is to be copied from.
  * @n: number of bytes to be copied from src
  * Return: Pointer to 'dest'
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *n_src = src;
	char *n_dest = dest;

	for (i = 0; i < n; i++)
	{
		n_dest[i] = n_src[i];
	}
	return (n_dest);
}
