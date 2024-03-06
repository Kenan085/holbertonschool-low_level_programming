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
	unsigned int n, m, flag;

	for (n = 0; *(s + n) != '\0'; n++)
	{
		flag = 1;

		for (m = 0; *(accept + m) != '\0'; m++)
		{
			if (*(s + n) == *(accept + m))
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	return (n);
}
