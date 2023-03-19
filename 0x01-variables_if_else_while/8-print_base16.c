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
	char y = 'a';

	while (i < 10)
	{
	putchar(i + '0');
	i++;
	}
	while (y <= 'f')
	{
	putchar(y);
	y++;
	}
	putchar('\n');
	return (0);
}

