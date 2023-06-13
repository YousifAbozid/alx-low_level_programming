#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: array of arguments
 *
 * Return: pointer to a new string containing all the arguments,
 * or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j, k, len = 0;
char *str;

/* check for NULL or empty input */
if (ac == 0 || av == NULL)
return (NULL);

/* calculate length of the new string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++;
}

/* allocate memory for the new string */
str = malloc((len + 1) * sizeof(char));
if (str == NULL)
return (NULL);

/* copy the arguments into the new string */
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';

return (str);
}
