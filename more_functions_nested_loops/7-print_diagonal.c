#include "main.h"

/**
 *print_diagonal - draw diagonal
 *@n: number of times the character must be
 *printed
 *Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('\');
			_putchar('\n');
			_putchar(' ');
		}
		_putchar('\n');
	}
}