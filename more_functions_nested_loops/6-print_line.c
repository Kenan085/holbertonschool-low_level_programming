#include "main.h"

/**
 * print_line - drawing a straight line in terminal
 * @n: the number of times character should be
 * printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
