#include "main.h"

/**
 * print_square - Function prints square with
 * the help of # character
 * @size: The size of the square
 * Return: Void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = size; i > 0; i--)
		{
			for (int z = size; z > 0; z--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
