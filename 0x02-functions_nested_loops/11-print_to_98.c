#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
while (n != 98)
{
print_number(n);
_putchar(',');
_putchar(' ');
n < 98 ? n++ : n--;
}
print_number(n);
_putchar('\n');
}
