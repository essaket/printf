#include "main.h"

/**
 * print_perc - print %.
 *
 * @args: arguments.
 *
 * Return: count of chars.
 */

int print_perc(va_list args)
{
	char *str = va_list(args, char *);
	int c = 0, i = 0;

	if (str[0] == '%')
		c += _putchar ('%');
	if (str[1] != NULL)
		c += _putchar(str[1]);

	return (c);
}
