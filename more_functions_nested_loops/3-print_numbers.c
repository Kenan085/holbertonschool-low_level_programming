#include "main.h"

/**
 * print_numbers - Printing the numbers
 * Return: void
 */
void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
