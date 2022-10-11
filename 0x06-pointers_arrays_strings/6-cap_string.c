#include "main.h"

/**
* cap_string - capitalizes all the words of a string
*
* @str: char type pointer variable
* Return: str
*/
char *cap_string(char *str)
{
	int i, j;
	int t;
	char nots[] = ",;.!?(){}\n\t\" ";


	for (i = 0, t = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[i] <= 122)
			t = 1;
		for (j = 0; nots[j] != '\0'; j++)
		{
			if (nots[j] == str[i])
				t = 1;
		}

		if (t)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
				t = 0;
			}
			else if (str[i] >= 65 && str[i] <= 90)
				t = 0;
			else if (str[i] >= 48 && str[i] <= 57)
				t = 0;
		}
	}
	return (str);
}
