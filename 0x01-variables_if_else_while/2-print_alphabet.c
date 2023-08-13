#include <stdio.h>
/**
 *  main - Entry point
 *  Description: A program that prints the alphabets in lowercase
 *  Return: 0 Always (Success)
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
