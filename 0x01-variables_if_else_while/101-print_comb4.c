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
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9 ; j++)
	{
	for (k = i + 2; k <= 9 ; k++)
	{
	if (i != j && i < j && j != k && j < k)
	{
	putchar(48 + i);
	putchar(48 + j);
	putchar(48 + k);
	if (i < 7 || j < 8 || k < 9)
	{
	putchar(44);
	putchar(32);
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

