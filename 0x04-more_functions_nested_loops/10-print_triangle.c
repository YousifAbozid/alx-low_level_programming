#include "main.h"
/**
 *print_triangle - prints a triangle of size size.
 *@size: size of triangle.
 *
 *Return: void.
 */
void print_triangle(int size)
{
	int i, square, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (space = 1; space <= (size - i); space++)
			{
				_putchar(' ');
			}
			for (square = 1; square <= i; square++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
