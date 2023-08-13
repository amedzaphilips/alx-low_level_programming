#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints single digits.
 * Return: 0 Always (Success)
 */

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar(10);
	return (0);
}
