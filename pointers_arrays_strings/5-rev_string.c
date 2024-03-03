#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input
 * Return: Alwaays 0
 */
void rev_string(char *s)
{
	char *charr;
	int i = 0;

	while (*s != '\0')
	{
		*charr = *s;
		s++;
		charr++;
		i++;
	}
	for (; i > 0; i--)
	{
		*s = *(charr - i);
		s--;
	}
}
