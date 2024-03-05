#include "main.h"

/**
 * *_memset - function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: first variable
 * @b: second variable
 * @n: number of the bytes
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	k = 0;
	while (k < n)
	{
		s[k] = b;
		k++;
	}
	return (s);
}
