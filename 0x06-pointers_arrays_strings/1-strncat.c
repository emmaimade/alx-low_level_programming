#include "main.h"

/**
* _strncat - Concatenates two strings using number of bytes n
*
* @dest: char type pointer variable
* @src: char type pointer variable
* @n: int type variable
* Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
