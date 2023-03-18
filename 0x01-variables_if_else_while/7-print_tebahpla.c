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
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
	putchar(lowercase);
	lowercase--;
	}
	putchar('\n');
	return (0);
}
