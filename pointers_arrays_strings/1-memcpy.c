#include "main.h"

/**
 * *_memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: to destination area
 * @src: from source area
 * @n: times
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	k = 0;
	while (k < n)
	{
		dest[k] = src[k];
		k++;
	}
	return (dest);
}
