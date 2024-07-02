#include <stdio.h>
/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: Pointer to the input string
 * @c: The character to search for
 *
 * Return: Pointer to the first occurrence of `c` in `s`, or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

if (c == '\0')
return (s);

return (NULL);
}
