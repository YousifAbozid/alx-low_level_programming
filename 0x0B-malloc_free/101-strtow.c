#include <stdlib.h>
#include <string.h>
#include "main.h"

int count_words(char *str);
int get_word_length(char *str);
void free_words(char **words, int num_words);

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words) or NULL if an error occurs
 */
char **strtow(char *str)
{
char **words;
int num_words, i, j, k, len;

if (str == NULL || *str == '\0')
return (NULL);

num_words = count_words(str);
if (num_words == 0)
return (NULL);

words = malloc(sizeof(char *) * (num_words + 1));
if (words == NULL)
return (NULL);

for (i = 0, j = 0; i < num_words; i++, j++)
{
while (*str == ' ')
str++;

len = get_word_length(str);
words[i] = malloc(sizeof(char) * (len + 1));
if (words[i] == NULL)
{
free_words(words, i);
return (NULL);
}

for (k = 0; k < len; k++)
words[i][k] = *(str++);

words[i][k] = '\0';
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
int count = 0, in_word = 0;

while (*str != '\0')
{
if (*str == ' ')
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
 * get_word_length - gets the length of a word in a string
 * @str: the string containing the word
 *
 * Return: the length of the word
 */
int get_word_length(char *str)
{
int len = 0;

while (*(str++) != ' ' && *str != '\0')
len++;

return (len);
}

/**
 * free_words - frees an array of words
 * @words: the array of words to free
 * @num_words: the number of words in the array
 */
void free_words(char **words, int num_words)
{
int i;

for (i = 0; i < num_words; i++)
free(words[i]);

free(words);
}
