#include <stdio.h>
/**
 * main - Prints inlowercase alphabets
 * Return: Always 0 on suceesful execution
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}

