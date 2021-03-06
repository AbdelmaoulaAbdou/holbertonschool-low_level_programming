#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to check for second string bytes.
 * @accept: second string to check from for the bytes.
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	if (accept[0] == '\0')
		return (0);
	if (s[0] == '\0')
		return (0);

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] != accept[j])
			{
				if (j == strlen(accept) - 1)
					return (i);
			}
			else
				break;
			j++;
		}
		i++;
	}
	return (i);
}
