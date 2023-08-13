#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints the alphabet in small case
 * Return: 0 always (Success)
 */

int main(void)
{
	int a, b;

	for (a = 97; a < 123; a++)
		putchar(a);
	for (b = 65; b < 91; b++)
		putchar(b);
	putchar(10);
	return (0);
}
