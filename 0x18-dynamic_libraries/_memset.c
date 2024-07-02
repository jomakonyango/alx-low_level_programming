#include <stdio.h>
/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: The constant byte to fill
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the modified memory area (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
char *s_start = s;

while (n > 0)
{
*s = b;
s++;
n--;
}

return (s_start);
}
