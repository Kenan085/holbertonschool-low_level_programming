#include <stdio.h>

/**
 * main - Fizz Buzz babyyyy
 * Return: Always 0
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf ("FizzBuzz");
		} else if (num % 5 == 0 && num % 3 != 0)
		{
			printf ("Buzz");
		} else if (num % 3 == 0 && num % 5 != 0)
		{
			printf ("Fizz");
		}
		else
		{
			printf ("%d", num);
		}
		printf(" ");
		num++;
	}
	printf("\n");
	return (0);
}
