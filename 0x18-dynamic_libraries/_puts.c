#include <unistd.h>

/**
 * _puts - Prints a string followed by a newline
 * @s: Pointer to the input string
 */
void _puts(char *s)
{
while (*s != '\0')
{
write(1, s, 1);
s++;
}
write(1, "\n", 1);
}
