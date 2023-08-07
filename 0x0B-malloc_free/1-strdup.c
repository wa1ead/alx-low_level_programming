#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate new memory space
 * @str: string
 * Return: always 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	aaa = malloc(sizeof(char) * (i + 1));
	if (aaa + NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		aaa[y] = str[y];

	return (aaa);
}
