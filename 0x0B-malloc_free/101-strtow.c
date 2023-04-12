#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

int count_words(char *str);
int find_word_length(char *str);
char *copy_word(char *str, int n);

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **words;
int i, j, k, n, count;

if (str == NULL || *str == '\0')
return (NULL);

count = count_words(str);
words = malloc((count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i = 0, j = 0; i < count; i++, j += n + 1)
{
while (isspace(str[j]))
j++;

n = find_word_length(str + j);
words[i] = copy_word(str + j, n);
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}
}
words[i] = NULL;
return (words);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
int count = 0;
int in_word = 0;

while (*str != '\0')
{
if (isspace(*str))
in_word = 0;
else if (in_word == 0)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}

/**
 * find_word_length - finds the length of a word in a string
 * @str: the string containing the word
 *
 * Return: the length of the word
 */
int find_word_length(char *str)
{
int n = 0;

while (str[n] != '\0' && !isspace(str[n]))
n++;

return (n);
}

/**
 * copy_word - copies a word from a string into a new string
 * @str: the string containing the word
 * @n: the length of the word
 *
 * Return: a pointer to the new string containing the word
 */
char *copy_word(char *str, int n)
{
char *word = malloc((n + 1) * sizeof(char));
int i;

if (word == NULL)
return (NULL);

for (i = 0; i < n; i++)
word[i] = str[i];
word[i] = '\0';

return (word);
}
