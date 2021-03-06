#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with a specific char.
 * @size: the size of the array.
 * @c: character of the array.
 * Return: pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(c) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
