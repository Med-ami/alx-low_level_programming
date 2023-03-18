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
	int i = 0;

	while (i < 10)
	{
	printf("%d", i);
	i++;
	}
	putchar('\n');
	return (0);
}
