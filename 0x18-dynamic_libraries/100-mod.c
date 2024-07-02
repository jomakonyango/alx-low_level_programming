#include <stdio.h>
/**
 * mod - Computes the remainder of division.
 * @a: First integer (dividend).
 * @b: Second integer (divisor).
 * Return: Remainder of a divided by b.
 */
int mod(int a, int b)
{
if (b != 0)
{
return (a % b);
}
else
{
return (0);
}
}
