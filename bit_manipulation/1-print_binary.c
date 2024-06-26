#include "main.h"

/**
 * binary_printer - prints decimal as binary.
 *
 * @n: given decimal.
 */

void binary_printer(unsigned long int n)
{
	if (!n)
		return;
	binary_printer(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 *print_binary - prints 0 if n equals to zero
 *otherwise sends number to binary_printer.
 *@n: given decimal.
 */

void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	binary_printer(n);
}
