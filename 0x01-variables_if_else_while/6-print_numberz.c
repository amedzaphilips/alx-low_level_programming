#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints 0 - 9.
 * Return: 0 Always (Success)
 */

int main(void)
{
        int a;

        for (a = 48; a <= 57; a++)
                putchar(a);
        putchar(10);
        return (0);
}
