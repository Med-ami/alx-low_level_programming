#include "main.h"
/**
 * _isalpha - checks for lowercase or uppercase character
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}