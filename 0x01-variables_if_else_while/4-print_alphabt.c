
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
	char c = 'a';

	while (c <= 'z')
	{
	if (c != 'e' && c != 'q')
	{
	putchar(c);
	}
	c++;
	}
	putchar('\n');
	return (0);
}
