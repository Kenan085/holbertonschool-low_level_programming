#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: Our variable
 * Return: Always 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
