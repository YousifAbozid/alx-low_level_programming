#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @args: va_list containing the character to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: va_list containing the integer to print
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list containing the float to print
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list containing the string to print
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int i, j;
char *separator = "";
va_list vprint;

types opt[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};

va_start(vprint, format);
i = 0;
while (format != NULL && format[i] != '\0')
{
j = 0;
while (opt[j].c != '\0')
{
if (opt[j].c == format[i])
{
printf("%s", separator);
opt[j].f(vprint);
separator = ", ";
}
j++;
}
i++;
}
va_end(vprint);
printf("\n");
}
