#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string into integer
 * @s: string
 * Return: always 0
 */
int _atoi(char *s)
{
	int x, y, z, len, n, digit;

	x = 0;
	y = 0;
	z = 0;
	len = 0;
	n = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && n == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			z = z * 10 + digit;
			n = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			n = 0
		}
		x++
	}

	if (n == 0)
		return (0);

	return (z);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
