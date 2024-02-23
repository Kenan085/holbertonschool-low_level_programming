#include <stdio.h>

/**
 * main -IDK
 *
 * Result: Always 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
		num++;
	}
	return (0);
}
