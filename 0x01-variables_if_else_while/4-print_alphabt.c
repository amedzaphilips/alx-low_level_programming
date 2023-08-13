#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints some alphabets
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 101 || a == 113)
		{	a++;
			continue;
		}
		putchar(a);
	}
	putchar(10);
	return (0);
}
