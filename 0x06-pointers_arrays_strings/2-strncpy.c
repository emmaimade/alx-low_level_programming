#include "main.h"

/**
* _strncpy - Copies a string based on number of n
*
* @dest: char type pointer variable
* @src: char type pointer variable
* @n: int type variable
* Return: Returns destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && n > i; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
