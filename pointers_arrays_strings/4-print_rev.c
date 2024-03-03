#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string char
 * Return: s in reverse format
 */
void print_rev(char *s)
{
	int n;

	n = _strlen(s);
	for (n = n - 1; s[n] != '\0'; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
