#include "main.h"
#include <stdlib.h>
/**
 * str_concat - add inputs for size
 * @s1: input 1
 * @s2: input 2
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int x1, x2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x1 = x2 = 0;
	while (s1[x1] != '\0')
		x1++;
	while (s2[x2] != '\0')
		x2++;

	con = malloc(sizeof(char) * (x1 + x2 + 1));
	if (con == NULL)
		return (NULL);
	x1 = x2 = 0;
	while (s1[x1] != '\0')
	{
		con[x1] = s1[x1];
		x1++;
	}
	while (s2[x2] != '\0')
	{
		con[x1] = s2[x2];
		x1++, x2++;
	}
	con[x1] = '\0';
	return (con);
}
