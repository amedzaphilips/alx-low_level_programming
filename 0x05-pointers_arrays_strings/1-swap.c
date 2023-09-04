#include "main.h"
/**
 * swap_int - a function that swaps values
 * @a: variable to swap
 * @b: variable to swap
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int can;
	can = *a;
	*a = *b;
	*b = can;
}
