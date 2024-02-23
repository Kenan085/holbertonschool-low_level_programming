#include <stdio.h>

/**
 * main -True
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
			putchar('\n');
		}
		letter++;
	}
	return (0);
}
