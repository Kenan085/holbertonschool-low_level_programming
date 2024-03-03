#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string char
 * Return: s in reverse format
 */
void print_rev(char *s)
{
	int n;

	n = strlen(s);
	while (n > 0)
	{
		if (*(s + n) == '\0')
		{
			n--;
			continue;
		}
		_putchar(*(s + n));
		n--;
	}
	putchar('\n');
}
