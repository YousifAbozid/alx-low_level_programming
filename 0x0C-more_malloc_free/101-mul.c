#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - multiply two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
char *num1, *num2;
int a, b, result, i;

if (argc != 3)
{
printf("Error\n");
return (98);
}

num1 = argv[1];
num2 = argv[2];
/* Check that num1 and num2 are composed only of digits */
for (i = 0; num1[i] != '\0'; i++)
{
if (!isdigit(num1[i]))
{
printf("Error\n");
return (98);
}
}
for (i = 0; num2[i] != '\0'; i++)
{
if (!isdigit(num2[i]))
{
printf("Error\n");
return (98);
}
}
/* Convert num1 and num2 to integers */
a = atoi(num1);
b = atoi(num2);
/* Compute the product and print the result */
result = a *b;
printf("%d\n", result);

return (0);
}
