#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the alphabets in reverse
 * Return: 0 Always (Success)
 */

int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
		putchar(a);
	putchar(10);
	return (0);
}
