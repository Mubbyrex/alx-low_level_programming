#include "main.h"
/**
 * _strlen_recursion - Write a function that returns
 * the length of a string.
 * @s: point to a char
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\n')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
