#include "main.h"

/**
 * print_most_numbers - Print 01356789
 * Return: Void
 */
void print_most_numbers(void)
{
	char n = '0';

	while (n < '10')
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
		n++;
	}
}