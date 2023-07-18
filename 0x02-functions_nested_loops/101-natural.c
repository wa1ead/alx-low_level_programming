/*
 * File: 101-natural.c
 * Auth: vincent kip
 */
#include <stdio.h>
/**
 * main - entry point
 * for - loop
 * Return: always 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
