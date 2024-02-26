#include "main.h"

/**
 *print_diagonal - draw diagonal
 *@n: number of times the character must be
 *printed
 *Return: void
 */
void print_diagonal(int n)
{
	int k, z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			for (z = 0; z < k; z++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
