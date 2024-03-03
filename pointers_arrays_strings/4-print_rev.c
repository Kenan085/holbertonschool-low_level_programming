#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string char
 * Return: s in reverse format
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (len = len - 1; s[len] != '\0'; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
