#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 on success
 */

int main(void)
{
int letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');

return (0);
}
