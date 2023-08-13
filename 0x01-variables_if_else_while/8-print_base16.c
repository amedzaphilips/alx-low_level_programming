#include <stdio.h>
/**
 * main - Entry point
 * A program that prints numbers in hex
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar(10);
	return (0);
}
