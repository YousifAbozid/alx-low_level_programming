#include "3-calc.h"
/**
 * main - performs simple operation
 * @argc: number of arguments
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	register int a, b;
	int (*fp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	fp = get_op_func(argv[2]);
	if (!fp)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%i\n", fp(a, b));
	return (0);
}
