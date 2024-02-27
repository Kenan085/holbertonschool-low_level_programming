#include "main.h"

/**
 * print_triangle - printing triangle
 *@size: The size of the triangle
 *Return: void
 */
void print_triangle(int size)
{
	int i, j, k, z;

	for (i = 1; i <= size; i++)
	{
		k = size - i;
		for (j = k; j >= 1; j--)
		{
			_putchar(' ');
		}

		for (z = 1; z <= i; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
