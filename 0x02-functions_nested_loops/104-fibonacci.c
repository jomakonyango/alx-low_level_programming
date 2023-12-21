#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
*
* Return: Always 0.
*/
int main(void)
{
unsigned long int a = 1, b = 2, tmp;
int i;

printf("%lu, %lu", a, b);

for (i = 3; i <= 98; i++)
{
tmp = a + b;
a = b;
b = tmp;

printf(", %lu", b);
}

printf("\n");

return (0);
}
