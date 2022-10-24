#include "main.h"

/**
 * print_char - print char
 * @i: i
 * @ptr: ptr
 * @format: format
 * @count: count
 *
 * Return: int
 */
int print_char(int *i, va_list ptr, const char *format, int *count)
{
	if (format[*i + 1] == 'c')
	{
		char c = va_arg(ptr, int);

		if (c == 0)
			return (-1);

		_putchar(c);
		*count = *count + 1;
		*i = *i + 1;
	}
	return (0);
}

/**
 * print_string - print string
 * @i: i
 * @ptr: ptr
 * @format: format
 * @count: count
 *
 * Return: int
 */
int print_string(int *i, va_list ptr, const char *format, int *count)
{
	if (format[*i + 1] == 's')
	{
		char *s = va_arg(ptr, char *);
		int j = 0;

		if (s == NULL)
			s = "(null)";

		while (s[j] != '\0')
		{
			_putchar(s[j]);
			*count = *count + 1;
			j++;
		}
		*i = *i + 1;
	}
	return (0);
}
