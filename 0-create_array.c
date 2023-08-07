#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of int size
 * @size: size of array
 * @c: char
 * Return: always 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str = NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
