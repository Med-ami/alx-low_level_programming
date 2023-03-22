#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative() - check for number is positive or negative,
 * followed by a new line
 * @n: print from this number
 */
void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

}

