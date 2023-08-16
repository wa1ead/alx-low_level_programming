#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints array elements
 * @array: array
 * @size: size of elements
 * @action: pointer
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
