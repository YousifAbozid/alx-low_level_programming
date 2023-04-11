#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
int i;
if (argc > 0)
{
for (i = 0; i < argc; i++))
printf("%s\n", argv[i]);
}
return (0);
}
