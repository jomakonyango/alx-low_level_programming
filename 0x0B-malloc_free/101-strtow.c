#include "main.h"
#include <stdlib.h>

/**
 * wordlen - calculates the length of a word
 * @str: the string
 *
 * Return: the length of the word
 */
int wordlen(char *str)
{
int len = 0;

while (*(str + len) && *(str + len) != ' ')
len++;

return (len);
}

/**
 * wordcount - counts the number of words in a string
 * @str: the string
 *
 * Return: the number of words in the string
 */
int wordcount(char *str)
{
int count = 0, inword = 0;

do switch (*str) {

case '\0':
case ' ':
if (inword)
{
inword = 0;
count++;
}
break;
default:
inword = 1;
} while (*str++);

return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string
 *
 * Return: pointer to an array of words (strings)
 */
char **strtow(char *str)
{
char **words = NULL;
int wc, i, j, k, wl;

if (str == NULL || *str == '\0')
return (NULL);
wc = wordcount(str);
if (wc == 0)
return (NULL);
words = (char **) malloc((wc + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (i = 0; i <= wc; i++)
words[i] = NULL;
i = 0;
while (*str)
{
if (*str == ' ')
{
str++;
continue;
}
wl = wordlen(str);
words[i] = (char *) malloc((wl + 1) * sizeof(char));
if (words[i] == NULL)
{
while (i >= 0)
free(words[i--]);
free(words);
return (NULL);
}
for (j = 0, k = 0; j < wl; j++, k++, str++)
words[i][k] = *str;
words[i++][k] = '\0';
}
words[wc] = NULL;

return (words);
}

