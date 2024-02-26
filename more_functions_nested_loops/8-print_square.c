#include "main.h"

/**
 * print_square - Function prints square with
 * the help of # character
 * @size: The size of the square
 * Return: Void
 */
void print_square(int size)
{
	int i, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i > 0; i--)
		{
			for (z = size; z > 0; z--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
