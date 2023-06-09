#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0 on success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc > 0)
printf("%d\n", argc - 1);
return (0);
}
