#include "main.h"
/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: string to be measured.
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int longo = 0;

	if (*s)
	{
		longo++;
		longo += _strlen_recursion(s + 1);
	}

	return (longo);
}
