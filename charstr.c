#include "main.h"
/**
 *print_c - function that prints char
 *@ar_list: character
 *Return: Nothing
 */
int print_c(va_list ar_list)
{
int c = va_arg(ar_list, int);

return (_putchar(c));
}


/**
 *print_s - a function that prints str
 *@ar_list: string
 *Return: Nohting
 */
int print_s(va_list ar_list)
{
int i, count = 0;
char *str;

str = va_arg(ar_list, char *);
if (str == NULL)
str = "(null)";

for (i = 0; str[i]; i++)
count += _putchar(str[i]);

return (count);
}
