#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: our array
 * @size: size of array
 * @cmp:is a pointer to the function to be used to compare values
 * Return: if any elements of array matches or size < 0 -1;
 * otherwise index of the 1st element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != '\0'))
		{
			return (i);
		}
	}
	return (-1);
}
