#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills memory
 * @s: memory area
 * @b: character
 * @n: number
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
/**
 * *_calloc - allocates memory
 * @nmemb: number of elements
 * @size: size
 * Return: always 0
 */
void *_calloc -(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
