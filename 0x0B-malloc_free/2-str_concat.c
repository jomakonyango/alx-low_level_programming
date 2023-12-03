#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory containing s1 followed by
 *         s2, and null terminated (SUCCESS) or NULL if insufficient memory was
 *         available (FAILURE)
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int i, j, length1 = 0, length2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[length1])
length1++;
while (s2[length2])
length2++;

s = malloc(sizeof(char) * (length1 + length2 + 1));
if (s == NULL)
return (NULL);

for (i = 0; i < length1; i++)
s[i] = s1[i];
for (j = 0; j < length2; j++, i++)
s[i] = s2[j];

s[i] = '\0';

return (s);
}
