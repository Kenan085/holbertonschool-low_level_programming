#include "main.h"

/**
 * puts_half - The function should print the second half of the string
 * @str: string
 * Return: second half of string
 */
void puts_half(char *str)
{
	int len = 0, n, i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}
	for (; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
