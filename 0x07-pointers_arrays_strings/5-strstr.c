#include "main.h"

/**
  * _strstr - Finds the first occurence of the substring needle
  * in the string haystack.
  * The terminating null bytes ('\0') are not compared
  *
  * @haystack: String to be scanned
  * @needle: Substring to be searched for in haystack
  * Return: Pointer to the beginning of the located substring,
  * or NULL if the substring is not found.
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;
	k = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + k] != '\0' && haystack[i + k] != '\0'
		&& needle[j + k] == haystack[i + k])
		{
			if (haystack[i + k] != needle[j + k])
				break;
			k++;
		}
		if (needle[j + k] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}

	return (0);
}
