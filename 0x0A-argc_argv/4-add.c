#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int sum = 0;
int num;
char *ptr;

for (int i = 1; i < argc; i++)
{
num = strtol(argv[i], &ptr, 10);

if (*ptr)
{
printf("Error\n");
return (1);
}

sum += num;
}

printf("%d\n", sum);

return (0);
}
