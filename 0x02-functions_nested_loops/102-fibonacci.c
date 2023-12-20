#include <stdio.h>

/**
* main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
*
* Return: Always 0.
*/
int main(void)
{
int i;
unsigned long int fib[50];

fib[0] = 1;
fib[1] = 2;

for (i = 2; i < 50; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 0; i < 49; i++)
{
printf("%lu, ", fib[i]);
}

printf("%lu\n", fib[49]);

return (0);
}
