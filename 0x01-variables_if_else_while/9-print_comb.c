#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: A C program that prints with put function
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + 48);
	if (i != 9)
	{
		putchar(44);
		putchar(32);
	}
	}
	putchar('\n');
	return (0);
}

