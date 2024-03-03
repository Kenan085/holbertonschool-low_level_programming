#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: first string
 * @src: second string
 * @n: element num
 * Return: copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	for ( ; k < n; k++)
	{
		dest[k] = '\0';
	}
	return (dest);
}
