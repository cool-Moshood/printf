#ifndef __main__
#define __main__

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct op - function object
 * @c: flag
 * @f: function
 */
typedef struct op
{
	char *c;
	int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list ar_list);
int (*func_caller(char s))(va_list ar_list);
int print_s(va_list ar_list);
int print_d(va_list ar_list);
int print_i(va_list ar_numlist);
int print_b(va_list binary_list);

#endif
