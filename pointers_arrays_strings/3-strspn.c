#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: string to be scanned.
 * @accept: string containing the
 * characters to match.
 * Return: Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;

	while (*s != '\0')
	{
		int flag = 0;

		while (*accept != '\0' && flag == 0)
		{
			if (*accept == *s)
			{
				flag = 1;
				counter++;
			}
			accept++;
		}
		s++;
	}
	return (counter);
}
