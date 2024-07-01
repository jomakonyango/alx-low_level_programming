#include <stdio.h>
/**
 * _strspn - Calculates the length of the initial segment of s
 *            which consists only of characters from accept.
 * @s: Pointer to the input string
 * @accept: Pointer to the set of characters to match
 *
 * Return: Number of leading characters in s that are in accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
break;
a++;
}
if (*a == '\0')
return (count);
count++;
s++;
}

return (count);
}
