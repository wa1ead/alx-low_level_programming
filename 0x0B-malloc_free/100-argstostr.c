#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry point
 * @ac: integer input
 * @av: double pointer array
 * Return: always 0
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, w = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			w++;
	}
	w += ac;

	str = malloc(sizeof(char) * w + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		if (str[z] == '\0')
			str[z++] = '\n';
	}
	return (str);
}
