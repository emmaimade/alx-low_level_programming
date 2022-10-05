#include "main.h"

/**
* _strcpy - Copies the src string to the dest string
*
* @dest: char type pointer variable
* @src: char type pointer variable
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
