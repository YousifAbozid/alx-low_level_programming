#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct fmt_t - struct
 * @c: data type
 * @f: function
 */
typedef struct fmt_t
{
	char type;
	void (*f)(va_list);
} fmt_t;

#endif /* VARIADIC_FUNCTIONS_H */
