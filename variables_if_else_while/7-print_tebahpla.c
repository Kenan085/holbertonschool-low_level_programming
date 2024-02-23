#include <stdio.h>

/**
 * main - Reverse Alphabet
 *
 * Result: Always 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
