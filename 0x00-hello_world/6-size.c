#include <stdio.h>
/**
 * main - A program that prints the size of data types.
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char c;
	int i;
	float f;
	long int li;
	long long int lli;

	printf("Size of a char: %ld byte (s)\n", sizeof(c));
	printf("Size of an int: %ld byte (s)\n", sizeof(i));
	printf("Size of a long int: %ld byte (s)\n", sizeof(li));
	printf("Size of a lon long int: %ld byte (s)\n", sizeof(lli));
	printf("Size of a float: %ld byte (s)\n", sizeof(f));
	return (0);
}
