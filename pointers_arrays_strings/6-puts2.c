#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int n = 0, z;

	while (str[n] != '\0')
	{
		n++;
	}
	for (z = 0; z <= n - 1; z++)
	{
		if ((z % 2) == 0)
			_putchar(str[z]);
	}
	_putchar('\n');
}
